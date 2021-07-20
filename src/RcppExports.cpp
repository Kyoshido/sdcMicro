// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_calcSuppInds
List cpp_calcSuppInds(NumericMatrix inp, NumericVector checkVals, List params);
RcppExport SEXP _sdcMicro_cpp_calcSuppInds(SEXP inpSEXP, SEXP checkValsSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type checkVals(checkValsSEXP);
    Rcpp::traits::input_parameter< List >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_calcSuppInds(inp, checkVals, params));
    return rcpp_result_gen;
END_RCPP
}
// microaggregation_argus_cpp
List microaggregation_argus_cpp(NumericMatrix inp, NumericVector k, NumericVector useOptimal);
RcppExport SEXP _sdcMicro_microaggregation_argus_cpp(SEXP inpSEXP, SEXP kSEXP, SEXP useOptimalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type useOptimal(useOptimalSEXP);
    rcpp_result_gen = Rcpp::wrap(microaggregation_argus_cpp(inp, k, useOptimal));
    return rcpp_result_gen;
END_RCPP
}
// rankSwap_argus_cpp
List rankSwap_argus_cpp(NumericMatrix inp, IntegerVector perc);
RcppExport SEXP _sdcMicro_rankSwap_argus_cpp(SEXP inpSEXP, SEXP percSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type perc(percSEXP);
    rcpp_result_gen = Rcpp::wrap(rankSwap_argus_cpp(inp, perc));
    return rcpp_result_gen;
END_RCPP
}
