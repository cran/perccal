// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// sample_rcpp
NumericVector sample_rcpp(int N, int nsamp);
RcppExport SEXP perccal_sample_rcpp(SEXP NSEXP, SEXP nsampSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type nsamp(nsampSEXP);
    __result = Rcpp::wrap(sample_rcpp(N, nsamp));
    return __result;
END_RCPP
}
// Cquantile
NumericVector Cquantile(NumericVector xx, NumericVector p);
RcppExport SEXP perccal_Cquantile(SEXP xxSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    __result = Rcpp::wrap(Cquantile(xx, p));
    return __result;
END_RCPP
}
// Cdboot_multi
List Cdboot_multi(NumericMatrix xxyy, NumericVector lgridlo, NumericVector lgridhi, int B, int B2, int G);
RcppExport SEXP perccal_Cdboot_multi(SEXP xxyySEXP, SEXP lgridloSEXP, SEXP lgridhiSEXP, SEXP BSEXP, SEXP B2SEXP, SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type xxyy(xxyySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lgridlo(lgridloSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lgridhi(lgridhiSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    Rcpp::traits::input_parameter< int >::type B2(B2SEXP);
    Rcpp::traits::input_parameter< int >::type G(GSEXP);
    __result = Rcpp::wrap(Cdboot_multi(xxyy, lgridlo, lgridhi, B, B2, G));
    return __result;
END_RCPP
}
