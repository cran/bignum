#' Mathematical operations
#'
#' [biginteger] and [bigfloat] vectors support many of the standard mathematical
#' operations. The base R documentation can be found by searching for the
#' individual functions (e.g. [mean()]).
#'
#' @return The returned value depends on the individual function. We recommend
#'   reading the base R documentation for a specific function to understand
#'   the expected result.
#'
#' @examples
#' # summary
#' x <- bigfloat(1:5)
#' sum(x)
#' prod(x)
#' max(x)
#' min(x)
#' range(x)
#' mean(x)
#'
#' # cumulative
#' x <- bigfloat(1:5)
#' cumsum(x)
#' cumprod(x)
#' cummax(x)
#' cummin(x)
#'
#' # rounding
#' x <- bigfloat(1.5)
#' floor(x)
#' ceiling(x)
#' trunc(x)
#'
#' # miscellaneous
#' x <- bigfloat(2)
#' abs(x)
#' sign(x)
#' sqrt(x)
#'
#' # logarithms and exponentials
#' x <- bigfloat(2)
#' log(x)
#' log10(x)
#' log2(x)
#' log1p(x)
#' exp(x)
#' expm1(x)
#'
#' # trigonometric
#' x <- bigfloat(0.25)
#' cos(x)
#' sin(x)
#' tan(x)
#' acos(x)
#' asin(x)
#' atan(x)
#' cospi(x)
#' sinpi(x)
#' tanpi(x)
#'
#' # hyperbolic
#' x <- bigfloat(0.25)
#' cosh(x)
#' sinh(x)
#' tanh(x)
#' acosh(bigfloat(2))
#' asinh(x)
#' atanh(x)
#'
#' # special functions
#' x <- bigfloat(2.5)
#' gamma(x)
#' lgamma(x)
#' digamma(x)
#' trigamma(x)
#' factorial(x)
#' lfactorial(x)
#' @family bignum operations
#' @name bignum-math
NULL

#' Check for special values
#'
#' @description
#' [biginteger] and [bigfloat] support missing values (via `NA_biginteger_` and
#' `NA_bigfloat_` respectively).
#'
#' [bigfloat] additionally supports positive and negative infinity and
#' 'Not a Number' values. Usually these are the result of a calculation, but
#' they can also be created manually by casting from [numeric] to [bigfloat].
#'
#' These functions check for the presence of these special values. The base R
#' documentation can be found at [is.na()] and [is.finite()].
#'
#' @return A logical vector.
#'
#' @examples
#' x <- bigfloat(c(0, NA, Inf, -Inf, NaN))
#'
#' is.na(x)
#' is.finite(x)
#' is.infinite(x)
#' is.nan(x)
#' @family bignum operations
#' @name bignum-special
NULL

vec_math_bigfloat <- function(.fn, .x, ..., na.rm = FALSE) {
  switch(.fn,

    # Summary group
    sum = c_bigfloat_sum(.x, na.rm),
    prod = c_bigfloat_prod(.x, na.rm),

    # Math group
    abs = c_bigfloat_abs(.x),
    sign = c_bigfloat_sign(.x),
    sqrt = c_bigfloat_sqrt(.x),
    ceiling = c_bigfloat_ceiling(.x),
    floor = c_bigfloat_floor(.x),
    trunc = c_bigfloat_trunc(.x),
    cumsum = c_bigfloat_cumsum(.x),
    cumprod = c_bigfloat_cumprod(.x),
    cummax = c_bigfloat_cummax(.x),
    cummin = c_bigfloat_cummin(.x),
    exp = c_bigfloat_exp(.x),
    expm1 = c_bigfloat_expm1(.x),
    log = bigfloat_log(.x, ...),
    log10 = c_bigfloat_log10(.x),
    log2 = c_bigfloat_log2(.x),
    log1p = c_bigfloat_log1p(.x),
    cos = c_bigfloat_cos(.x),
    cosh = c_bigfloat_cosh(.x),
    cospi = c_bigfloat_cos(bigpi * (.x %% 2)),
    sin = c_bigfloat_sin(.x),
    sinh = c_bigfloat_sinh(.x),
    sinpi = c_bigfloat_sin(bigpi * (.x %% 2)),
    tan = c_bigfloat_tan(.x),
    tanh = c_bigfloat_tanh(.x),
    tanpi = c_bigfloat_tan(bigpi * (.x %% 1)),
    acos = c_bigfloat_acos(.x),
    acosh = c_bigfloat_acosh(.x),
    asin = c_bigfloat_asin(.x),
    asinh = c_bigfloat_asinh(.x),
    atan = c_bigfloat_atan(.x),
    atanh = c_bigfloat_atanh(.x),
    gamma = c_bigfloat_gamma(.x),
    lgamma = c_bigfloat_lgamma(.x),
    digamma = c_bigfloat_digamma(.x),
    trigamma = c_bigfloat_trigamma(.x),

    # Other
    mean = c_bigfloat_sum(.x, na.rm) / sum(!is.na(.x)),
    is.nan = vec_data(.x) %|% "NA" == "NaN",
    is.infinite = vec_data(.x) %in% c("Inf", "-Inf"),
    is.finite = !(vec_data(.x) %in% c(NA, "NaN", "Inf", "-Inf")),

    # else
    stop_unsupported(.x, .fn)
  )
}

#' @export
vec_math.bignum_bigfloat <- function(.fn, .x, ..., na.rm = FALSE) {
  vec_math_bigfloat(.fn, .x, ..., na.rm = na.rm)
}

#' @export
vec_math.bignum_biginteger <- function(.fn, .x, ..., na.rm = FALSE) {
  switch(.fn,

    # Summary group
    sum = c_biginteger_sum(.x, na.rm),
    prod = c_biginteger_prod(.x, na.rm),

    # Math group
    abs = c_biginteger_abs(.x),
    sign = c_biginteger_sign(.x),
    ceiling = .x,
    floor = .x,
    trunc = .x,
    cumsum = c_biginteger_cumsum(.x),
    cumprod = c_biginteger_cumprod(.x),
    cummax = c_biginteger_cummax(.x),
    cummin = c_biginteger_cummin(.x),

    # Other
    mean = c_biginteger_sum(.x, na.rm) / sum(!is.na(.x)),
    is.nan = rep_along(.x, FALSE),
    is.finite = !is.na(.x),
    is.infinite = rep_along(.x, FALSE),

    # else
    vec_math_bigfloat(.fn, .x, ..., na.rm = na.rm)
  )
}

# functions with unnamed arguments require special handling --------------------

bigfloat_log <- function(x, base) {
  if (is_missing(base)) {
    c_bigfloat_log(x)
  } else {
    c_bigfloat_log(x) / c_bigfloat_log(vec_cast(base, bigfloat()))
  }
}
