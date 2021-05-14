## ---- include = FALSE---------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----setup--------------------------------------------------------------------
library(bignum)

## ----inf_and_nan--------------------------------------------------------------
bigfloat(c(1, -1, 0)) / 0

bigfloat(c(Inf, -Inf, NaN))

## ---- eval=FALSE--------------------------------------------------------------
#  is.na(x)
#  is.finite(x)
#  is.infinite(x)
#  is.nan(x)

## ---- eval=FALSE--------------------------------------------------------------
#  x < y
#  x > y
#  x <= y
#  x >= y
#  x == y
#  x != y

## ---- eval=FALSE--------------------------------------------------------------
#  + x
#  - x
#  x + y
#  x - y
#  x * y
#  x / y
#  x ^ y
#  x %% y
#  x %/% y

## ---- eval=FALSE--------------------------------------------------------------
#  # summary
#  sum(x)
#  prod(x)
#  max(x)
#  min(x)
#  range(x)
#  mean(x)
#  
#  # cumulative
#  cumsum(x)
#  cumprod(x)
#  cummax(x)
#  cummin(x)
#  
#  # rounding
#  floor(x)
#  ceiling(x)
#  trunc(x)
#  
#  # miscellaneous
#  abs(x)
#  sign(x)
#  sqrt(x)
#  
#  # logarithms and exponentials
#  log(x)
#  log10(x)
#  log2(x)
#  log1p(x)
#  exp(x)
#  expm1(x)
#  
#  # trigonometric
#  cos(x)
#  sin(x)
#  tan(x)
#  acos(x)
#  asin(x)
#  atan(x)
#  cospi(x)
#  sinpi(x)
#  tanpi(x)
#  
#  # hyperbolic
#  cosh(x)
#  sinh(x)
#  tanh(x)
#  acosh(x)
#  asinh(x)
#  atanh(x)
#  
#  # special functions
#  gamma(x)
#  lgamma(x)
#  factorial(x)
#  lfactorial(x)

