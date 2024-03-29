// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// bigfloat_interface.cpp
cpp11::strings c_bigfloat(cpp11::strings x);
extern "C" SEXP _bignum_c_bigfloat(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::logicals c_bigfloat_to_logical(cpp11::strings x);
extern "C" SEXP _bignum_c_bigfloat_to_logical(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_to_logical(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::integers c_bigfloat_to_integer(cpp11::strings x);
extern "C" SEXP _bignum_c_bigfloat_to_integer(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_to_integer(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::doubles c_bigfloat_to_double(cpp11::strings x);
extern "C" SEXP _bignum_c_bigfloat_to_double(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_to_double(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_format(cpp11::strings x, cpp11::strings notation, cpp11::integers digits, bool is_sigfig);
extern "C" SEXP _bignum_c_bigfloat_format(SEXP x, SEXP notation, SEXP digits, SEXP is_sigfig) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_format(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(notation), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(digits), cpp11::as_cpp<cpp11::decay_t<bool>>(is_sigfig)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::integers c_bigfloat_compare(cpp11::strings lhs, cpp11::strings rhs, bool na_equal);
extern "C" SEXP _bignum_c_bigfloat_compare(SEXP lhs, SEXP rhs, SEXP na_equal) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_compare(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs), cpp11::as_cpp<cpp11::decay_t<bool>>(na_equal)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::integers c_bigfloat_rank(cpp11::strings x);
extern "C" SEXP _bignum_c_bigfloat_rank(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_rank(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_add(cpp11::strings lhs, cpp11::strings rhs);
extern "C" SEXP _bignum_c_bigfloat_add(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_add(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_subtract(cpp11::strings lhs, cpp11::strings rhs);
extern "C" SEXP _bignum_c_bigfloat_subtract(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_subtract(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_multiply(cpp11::strings lhs, cpp11::strings rhs);
extern "C" SEXP _bignum_c_bigfloat_multiply(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_multiply(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_divide(cpp11::strings lhs, cpp11::strings rhs);
extern "C" SEXP _bignum_c_bigfloat_divide(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_divide(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_pow(cpp11::strings lhs, cpp11::strings rhs);
extern "C" SEXP _bignum_c_bigfloat_pow(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_pow(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_modulo(cpp11::strings lhs, cpp11::strings rhs);
extern "C" SEXP _bignum_c_bigfloat_modulo(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_modulo(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_sum(cpp11::strings x, bool na_rm);
extern "C" SEXP _bignum_c_bigfloat_sum(SEXP x, SEXP na_rm) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_sum(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x), cpp11::as_cpp<cpp11::decay_t<bool>>(na_rm)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_prod(cpp11::strings x, bool na_rm);
extern "C" SEXP _bignum_c_bigfloat_prod(SEXP x, SEXP na_rm) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_prod(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x), cpp11::as_cpp<cpp11::decay_t<bool>>(na_rm)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_cumsum(cpp11::strings x);
extern "C" SEXP _bignum_c_bigfloat_cumsum(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_cumsum(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_cumprod(cpp11::strings x);
extern "C" SEXP _bignum_c_bigfloat_cumprod(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_cumprod(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_cummax(cpp11::strings x);
extern "C" SEXP _bignum_c_bigfloat_cummax(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_cummax(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_cummin(cpp11::strings x);
extern "C" SEXP _bignum_c_bigfloat_cummin(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_cummin(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_abs(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_abs(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_abs(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_sign(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_sign(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_sign(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_sqrt(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_sqrt(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_sqrt(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_ceiling(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_ceiling(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_ceiling(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_floor(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_floor(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_floor(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_trunc(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_trunc(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_trunc(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_exp(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_exp(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_exp(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_expm1(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_expm1(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_expm1(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_log(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_log(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_log(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_log10(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_log10(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_log10(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_log2(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_log2(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_log2(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_log1p(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_log1p(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_log1p(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_cos(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_cos(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_cos(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_cosh(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_cosh(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_cosh(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_sin(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_sin(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_sin(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_sinh(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_sinh(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_sinh(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_tan(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_tan(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_tan(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_tanh(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_tanh(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_tanh(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_acos(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_acos(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_acos(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_acosh(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_acosh(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_acosh(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_asin(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_asin(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_asin(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_asinh(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_asinh(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_asinh(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_atan(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_atan(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_atan(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_atanh(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_atanh(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_atanh(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_gamma(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_gamma(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_gamma(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_lgamma(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_lgamma(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_lgamma(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_digamma(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_digamma(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_digamma(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_trigamma(cpp11::strings lhs);
extern "C" SEXP _bignum_c_bigfloat_trigamma(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_trigamma(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_seq_to_by(const cpp11::strings& from, const cpp11::strings& to, const cpp11::strings& by);
extern "C" SEXP _bignum_c_bigfloat_seq_to_by(SEXP from, SEXP to, SEXP by) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_seq_to_by(cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(from), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(to), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(by)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_seq_to_lo(const cpp11::strings& from, const cpp11::strings& to, const cpp11::integers& length_out);
extern "C" SEXP _bignum_c_bigfloat_seq_to_lo(SEXP from, SEXP to, SEXP length_out) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_seq_to_lo(cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(from), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(to), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(length_out)));
  END_CPP11
}
// bigfloat_interface.cpp
cpp11::strings c_bigfloat_seq_by_lo(const cpp11::strings& from, const cpp11::strings& by, const cpp11::integers& length_out);
extern "C" SEXP _bignum_c_bigfloat_seq_by_lo(SEXP from, SEXP by, SEXP length_out) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_bigfloat_seq_by_lo(cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(from), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(by), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(length_out)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger(cpp11::strings x);
extern "C" SEXP _bignum_c_biginteger(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::logicals c_biginteger_to_logical(cpp11::strings x);
extern "C" SEXP _bignum_c_biginteger_to_logical(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_to_logical(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::integers c_biginteger_to_integer(cpp11::strings x);
extern "C" SEXP _bignum_c_biginteger_to_integer(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_to_integer(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::doubles c_biginteger_to_double(cpp11::strings x);
extern "C" SEXP _bignum_c_biginteger_to_double(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_to_double(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_format(cpp11::strings x, cpp11::strings notation);
extern "C" SEXP _bignum_c_biginteger_format(SEXP x, SEXP notation) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_format(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(notation)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::integers c_biginteger_compare(cpp11::strings lhs, cpp11::strings rhs, bool na_equal);
extern "C" SEXP _bignum_c_biginteger_compare(SEXP lhs, SEXP rhs, SEXP na_equal) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_compare(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs), cpp11::as_cpp<cpp11::decay_t<bool>>(na_equal)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::integers c_biginteger_rank(cpp11::strings x);
extern "C" SEXP _bignum_c_biginteger_rank(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_rank(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_add(cpp11::strings lhs, cpp11::strings rhs);
extern "C" SEXP _bignum_c_biginteger_add(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_add(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_subtract(cpp11::strings lhs, cpp11::strings rhs);
extern "C" SEXP _bignum_c_biginteger_subtract(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_subtract(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_multiply(cpp11::strings lhs, cpp11::strings rhs);
extern "C" SEXP _bignum_c_biginteger_multiply(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_multiply(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_pow(cpp11::strings lhs, cpp11::integers rhs);
extern "C" SEXP _bignum_c_biginteger_pow(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_pow(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(rhs)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_modulo(cpp11::strings lhs, cpp11::strings rhs);
extern "C" SEXP _bignum_c_biginteger_modulo(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_modulo(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_quotient(cpp11::strings lhs, cpp11::strings rhs);
extern "C" SEXP _bignum_c_biginteger_quotient(SEXP lhs, SEXP rhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_quotient(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(rhs)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_sum(cpp11::strings x, bool na_rm);
extern "C" SEXP _bignum_c_biginteger_sum(SEXP x, SEXP na_rm) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_sum(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x), cpp11::as_cpp<cpp11::decay_t<bool>>(na_rm)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_prod(cpp11::strings x, bool na_rm);
extern "C" SEXP _bignum_c_biginteger_prod(SEXP x, SEXP na_rm) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_prod(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x), cpp11::as_cpp<cpp11::decay_t<bool>>(na_rm)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_cumsum(cpp11::strings x);
extern "C" SEXP _bignum_c_biginteger_cumsum(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_cumsum(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_cumprod(cpp11::strings x);
extern "C" SEXP _bignum_c_biginteger_cumprod(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_cumprod(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_cummax(cpp11::strings x);
extern "C" SEXP _bignum_c_biginteger_cummax(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_cummax(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_cummin(cpp11::strings x);
extern "C" SEXP _bignum_c_biginteger_cummin(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_cummin(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(x)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_abs(cpp11::strings lhs);
extern "C" SEXP _bignum_c_biginteger_abs(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_abs(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_sign(cpp11::strings lhs);
extern "C" SEXP _bignum_c_biginteger_sign(SEXP lhs) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_sign(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(lhs)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_seq_to_by(const cpp11::strings& from, const cpp11::strings& to, const cpp11::strings& by);
extern "C" SEXP _bignum_c_biginteger_seq_to_by(SEXP from, SEXP to, SEXP by) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_seq_to_by(cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(from), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(to), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(by)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_seq_to_lo(const cpp11::strings& from, const cpp11::strings& to, const cpp11::integers& length_out);
extern "C" SEXP _bignum_c_biginteger_seq_to_lo(SEXP from, SEXP to, SEXP length_out) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_seq_to_lo(cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(from), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(to), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(length_out)));
  END_CPP11
}
// biginteger_interface.cpp
cpp11::strings c_biginteger_seq_by_lo(const cpp11::strings& from, const cpp11::strings& by, const cpp11::integers& length_out);
extern "C" SEXP _bignum_c_biginteger_seq_by_lo(SEXP from, SEXP by, SEXP length_out) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_biginteger_seq_by_lo(cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(from), cpp11::as_cpp<cpp11::decay_t<const cpp11::strings&>>(by), cpp11::as_cpp<cpp11::decay_t<const cpp11::integers&>>(length_out)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_bignum_c_bigfloat",              (DL_FUNC) &_bignum_c_bigfloat,              1},
    {"_bignum_c_bigfloat_abs",          (DL_FUNC) &_bignum_c_bigfloat_abs,          1},
    {"_bignum_c_bigfloat_acos",         (DL_FUNC) &_bignum_c_bigfloat_acos,         1},
    {"_bignum_c_bigfloat_acosh",        (DL_FUNC) &_bignum_c_bigfloat_acosh,        1},
    {"_bignum_c_bigfloat_add",          (DL_FUNC) &_bignum_c_bigfloat_add,          2},
    {"_bignum_c_bigfloat_asin",         (DL_FUNC) &_bignum_c_bigfloat_asin,         1},
    {"_bignum_c_bigfloat_asinh",        (DL_FUNC) &_bignum_c_bigfloat_asinh,        1},
    {"_bignum_c_bigfloat_atan",         (DL_FUNC) &_bignum_c_bigfloat_atan,         1},
    {"_bignum_c_bigfloat_atanh",        (DL_FUNC) &_bignum_c_bigfloat_atanh,        1},
    {"_bignum_c_bigfloat_ceiling",      (DL_FUNC) &_bignum_c_bigfloat_ceiling,      1},
    {"_bignum_c_bigfloat_compare",      (DL_FUNC) &_bignum_c_bigfloat_compare,      3},
    {"_bignum_c_bigfloat_cos",          (DL_FUNC) &_bignum_c_bigfloat_cos,          1},
    {"_bignum_c_bigfloat_cosh",         (DL_FUNC) &_bignum_c_bigfloat_cosh,         1},
    {"_bignum_c_bigfloat_cummax",       (DL_FUNC) &_bignum_c_bigfloat_cummax,       1},
    {"_bignum_c_bigfloat_cummin",       (DL_FUNC) &_bignum_c_bigfloat_cummin,       1},
    {"_bignum_c_bigfloat_cumprod",      (DL_FUNC) &_bignum_c_bigfloat_cumprod,      1},
    {"_bignum_c_bigfloat_cumsum",       (DL_FUNC) &_bignum_c_bigfloat_cumsum,       1},
    {"_bignum_c_bigfloat_digamma",      (DL_FUNC) &_bignum_c_bigfloat_digamma,      1},
    {"_bignum_c_bigfloat_divide",       (DL_FUNC) &_bignum_c_bigfloat_divide,       2},
    {"_bignum_c_bigfloat_exp",          (DL_FUNC) &_bignum_c_bigfloat_exp,          1},
    {"_bignum_c_bigfloat_expm1",        (DL_FUNC) &_bignum_c_bigfloat_expm1,        1},
    {"_bignum_c_bigfloat_floor",        (DL_FUNC) &_bignum_c_bigfloat_floor,        1},
    {"_bignum_c_bigfloat_format",       (DL_FUNC) &_bignum_c_bigfloat_format,       4},
    {"_bignum_c_bigfloat_gamma",        (DL_FUNC) &_bignum_c_bigfloat_gamma,        1},
    {"_bignum_c_bigfloat_lgamma",       (DL_FUNC) &_bignum_c_bigfloat_lgamma,       1},
    {"_bignum_c_bigfloat_log",          (DL_FUNC) &_bignum_c_bigfloat_log,          1},
    {"_bignum_c_bigfloat_log10",        (DL_FUNC) &_bignum_c_bigfloat_log10,        1},
    {"_bignum_c_bigfloat_log1p",        (DL_FUNC) &_bignum_c_bigfloat_log1p,        1},
    {"_bignum_c_bigfloat_log2",         (DL_FUNC) &_bignum_c_bigfloat_log2,         1},
    {"_bignum_c_bigfloat_modulo",       (DL_FUNC) &_bignum_c_bigfloat_modulo,       2},
    {"_bignum_c_bigfloat_multiply",     (DL_FUNC) &_bignum_c_bigfloat_multiply,     2},
    {"_bignum_c_bigfloat_pow",          (DL_FUNC) &_bignum_c_bigfloat_pow,          2},
    {"_bignum_c_bigfloat_prod",         (DL_FUNC) &_bignum_c_bigfloat_prod,         2},
    {"_bignum_c_bigfloat_rank",         (DL_FUNC) &_bignum_c_bigfloat_rank,         1},
    {"_bignum_c_bigfloat_seq_by_lo",    (DL_FUNC) &_bignum_c_bigfloat_seq_by_lo,    3},
    {"_bignum_c_bigfloat_seq_to_by",    (DL_FUNC) &_bignum_c_bigfloat_seq_to_by,    3},
    {"_bignum_c_bigfloat_seq_to_lo",    (DL_FUNC) &_bignum_c_bigfloat_seq_to_lo,    3},
    {"_bignum_c_bigfloat_sign",         (DL_FUNC) &_bignum_c_bigfloat_sign,         1},
    {"_bignum_c_bigfloat_sin",          (DL_FUNC) &_bignum_c_bigfloat_sin,          1},
    {"_bignum_c_bigfloat_sinh",         (DL_FUNC) &_bignum_c_bigfloat_sinh,         1},
    {"_bignum_c_bigfloat_sqrt",         (DL_FUNC) &_bignum_c_bigfloat_sqrt,         1},
    {"_bignum_c_bigfloat_subtract",     (DL_FUNC) &_bignum_c_bigfloat_subtract,     2},
    {"_bignum_c_bigfloat_sum",          (DL_FUNC) &_bignum_c_bigfloat_sum,          2},
    {"_bignum_c_bigfloat_tan",          (DL_FUNC) &_bignum_c_bigfloat_tan,          1},
    {"_bignum_c_bigfloat_tanh",         (DL_FUNC) &_bignum_c_bigfloat_tanh,         1},
    {"_bignum_c_bigfloat_to_double",    (DL_FUNC) &_bignum_c_bigfloat_to_double,    1},
    {"_bignum_c_bigfloat_to_integer",   (DL_FUNC) &_bignum_c_bigfloat_to_integer,   1},
    {"_bignum_c_bigfloat_to_logical",   (DL_FUNC) &_bignum_c_bigfloat_to_logical,   1},
    {"_bignum_c_bigfloat_trigamma",     (DL_FUNC) &_bignum_c_bigfloat_trigamma,     1},
    {"_bignum_c_bigfloat_trunc",        (DL_FUNC) &_bignum_c_bigfloat_trunc,        1},
    {"_bignum_c_biginteger",            (DL_FUNC) &_bignum_c_biginteger,            1},
    {"_bignum_c_biginteger_abs",        (DL_FUNC) &_bignum_c_biginteger_abs,        1},
    {"_bignum_c_biginteger_add",        (DL_FUNC) &_bignum_c_biginteger_add,        2},
    {"_bignum_c_biginteger_compare",    (DL_FUNC) &_bignum_c_biginteger_compare,    3},
    {"_bignum_c_biginteger_cummax",     (DL_FUNC) &_bignum_c_biginteger_cummax,     1},
    {"_bignum_c_biginteger_cummin",     (DL_FUNC) &_bignum_c_biginteger_cummin,     1},
    {"_bignum_c_biginteger_cumprod",    (DL_FUNC) &_bignum_c_biginteger_cumprod,    1},
    {"_bignum_c_biginteger_cumsum",     (DL_FUNC) &_bignum_c_biginteger_cumsum,     1},
    {"_bignum_c_biginteger_format",     (DL_FUNC) &_bignum_c_biginteger_format,     2},
    {"_bignum_c_biginteger_modulo",     (DL_FUNC) &_bignum_c_biginteger_modulo,     2},
    {"_bignum_c_biginteger_multiply",   (DL_FUNC) &_bignum_c_biginteger_multiply,   2},
    {"_bignum_c_biginteger_pow",        (DL_FUNC) &_bignum_c_biginteger_pow,        2},
    {"_bignum_c_biginteger_prod",       (DL_FUNC) &_bignum_c_biginteger_prod,       2},
    {"_bignum_c_biginteger_quotient",   (DL_FUNC) &_bignum_c_biginteger_quotient,   2},
    {"_bignum_c_biginteger_rank",       (DL_FUNC) &_bignum_c_biginteger_rank,       1},
    {"_bignum_c_biginteger_seq_by_lo",  (DL_FUNC) &_bignum_c_biginteger_seq_by_lo,  3},
    {"_bignum_c_biginteger_seq_to_by",  (DL_FUNC) &_bignum_c_biginteger_seq_to_by,  3},
    {"_bignum_c_biginteger_seq_to_lo",  (DL_FUNC) &_bignum_c_biginteger_seq_to_lo,  3},
    {"_bignum_c_biginteger_sign",       (DL_FUNC) &_bignum_c_biginteger_sign,       1},
    {"_bignum_c_biginteger_subtract",   (DL_FUNC) &_bignum_c_biginteger_subtract,   2},
    {"_bignum_c_biginteger_sum",        (DL_FUNC) &_bignum_c_biginteger_sum,        2},
    {"_bignum_c_biginteger_to_double",  (DL_FUNC) &_bignum_c_biginteger_to_double,  1},
    {"_bignum_c_biginteger_to_integer", (DL_FUNC) &_bignum_c_biginteger_to_integer, 1},
    {"_bignum_c_biginteger_to_logical", (DL_FUNC) &_bignum_c_biginteger_to_logical, 1},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_bignum(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
