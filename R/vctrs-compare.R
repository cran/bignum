#' Comparison operations
#'
#' [biginteger] and [bigfloat] vectors support the standard comparison operations.
#' The base R documentation can be found at [Comparison].
#'
#' @return A logical vector.
#'
#' @examples
#' x <- biginteger(5)
#' y <- bigfloat(2)
#'
#' x < y
#' x > y
#' x <= y
#' x >= y
#' x == y
#' x != y
#' @family bignum operations
#' @name bignum-compare
NULL

# comparison operations --------------------------------------------------------

#' @export
`<.bignum_vctr` <- function(e1, e2) {
  vec_compare_bignum(e1, e2) < 0
}

#' @export
`>.bignum_vctr` <- function(e1, e2) {
  vec_compare_bignum(e1, e2) > 0
}

#' @export
`<=.bignum_vctr` <- function(e1, e2) {
  vec_compare_bignum(e1, e2) <= 0
}

#' @export
`>=.bignum_vctr` <- function(e1, e2) {
  vec_compare_bignum(e1, e2) >= 0
}


# common -----------------------------------------------------------------------

#' @export
vec_proxy_compare.bignum_vctr <- function(x, ...) {
  stop_unsupported(x, "vec_proxy_compare") # nocov
}

vec_compare_bignum <- function(x, y, na_equal = FALSE) {
  vec_assert(x)
  vec_assert(y)
  vec_assert(na_equal, ptype = logical(), size = 1L)

  args <- vec_recycle_common(x, y)

  # biginteger and double are not type-compatible (lossy casts occur both ways)
  # but for comparisons it is sufficient to cast to bigfloat
  if ((is_biginteger(x) && is.double(y)) || (is_biginteger(y) && is.double(x))) {
    args <- allow_lossy_cast(vec_cast_common(!!!args, .to = new_bigfloat()))
  } else {
    args <- vec_cast_common(!!!args)
  }

  vec_compare_bignum2(args[[1]], args[[2]], na_equal)
}

vec_compare_bignum2 <- function(x, y, na_equal = FALSE) {
  UseMethod("vec_compare_bignum2")
}

vec_compare_bignum2.default <- function(x, y, na_equal = FALSE) {
  stop_unsupported(x, "vec_compare_bignum2") # nocov
}


# biginteger -------------------------------------------------------------------

vec_compare_bignum2.bignum_biginteger <- function(x, y, na_equal = FALSE) {
  c_biginteger_compare(x, y, na_equal)
}

#' @export
vec_proxy_order.bignum_biginteger <- function(x, ...) {
  c_biginteger_rank(x)
}


# bigfloat ---------------------------------------------------------------------

vec_compare_bignum2.bignum_bigfloat <- function(x, y, na_equal = FALSE) {
  c_bigfloat_compare(x, y, na_equal)
}

#' @export
vec_proxy_order.bignum_bigfloat <- function(x, ...) {
  c_bigfloat_rank(x)
}
