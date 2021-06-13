## ---- include = FALSE---------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ---- echo=FALSE, fig.cap="Summary of numeric type hierarchies in base R and the bignum package. Arrows indicate the direction of richer data types. Dashed lines indicate the potential for lossy casts."----
knitr::include_graphics("type-hierarchy.png", dpi = 300)

## -----------------------------------------------------------------------------
# non-integer double
as.integer(1.5)

# large double
as.integer(1e10)

## ---- error=TRUE--------------------------------------------------------------
library(bignum)

# double -> biginteger
as_biginteger(1.5)

# biginteger -> double
as.double(biginteger(10)^16L)

# bigfloat -> double
as.double(bigfloat(1) / 3)

# bigfloat -> biginteger
as_biginteger(bigfloat(1.5))

# biginteger -> bigfloat
as_bigfloat(biginteger(10)^51L + 1L)

