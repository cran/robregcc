// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// nzcount
int nzcount(arma::vec x);
RcppExport SEXP _robregcc_nzcount(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(nzcount(x));
    return rcpp_result_gen;
END_RCPP
}
// softThres
double softThres(const double x, const double lambda);
RcppExport SEXP _robregcc_softThres(SEXP xSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(softThres(x, lambda));
    return rcpp_result_gen;
END_RCPP
}
// hardThres
double hardThres(const double x, const double lambda);
RcppExport SEXP _robregcc_hardThres(SEXP xSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(hardThres(x, lambda));
    return rcpp_result_gen;
END_RCPP
}
// clsq
arma::mat clsq(arma::mat X, arma::vec y, arma::mat C);
RcppExport SEXP _robregcc_clsq(SEXP XSEXP, SEXP ySEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(clsq(X, y, C));
    return rcpp_result_gen;
END_RCPP
}
// thresC
double thresC(int operatr, double x, double lambda);
RcppExport SEXP _robregcc_thresC(SEXP operatrSEXP, SEXP xSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type operatr(operatrSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(thresC(operatr, x, lambda));
    return rcpp_result_gen;
END_RCPP
}
// classoshe
Rcpp::List classoshe(arma::mat Xt, arma::vec y, arma::mat C, arma::vec we, double lam0, Rcpp::List control);
RcppExport SEXP _robregcc_classoshe(SEXP XtSEXP, SEXP ySEXP, SEXP CSEXP, SEXP weSEXP, SEXP lam0SEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Xt(XtSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type we(weSEXP);
    Rcpp::traits::input_parameter< double >::type lam0(lam0SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(classoshe(Xt, y, C, we, lam0, control));
    return rcpp_result_gen;
END_RCPP
}
// classol2
Rcpp::List classol2(arma::mat Xt, arma::vec y, arma::mat C, arma::vec we, double lam0, Rcpp::List control);
RcppExport SEXP _robregcc_classol2(SEXP XtSEXP, SEXP ySEXP, SEXP CSEXP, SEXP weSEXP, SEXP lam0SEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Xt(XtSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type we(weSEXP);
    Rcpp::traits::input_parameter< double >::type lam0(lam0SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(classol2(Xt, y, C, we, lam0, control));
    return rcpp_result_gen;
END_RCPP
}
// robregcc_nsp5
Rcpp::List robregcc_nsp5(arma::mat X, arma::vec y, arma::mat C, int intercept, arma::vec gammawt, arma::vec lampath, arma::vec shwt, Rcpp::List control, int ptype);
RcppExport SEXP _robregcc_robregcc_nsp5(SEXP XSEXP, SEXP ySEXP, SEXP CSEXP, SEXP interceptSEXP, SEXP gammawtSEXP, SEXP lampathSEXP, SEXP shwtSEXP, SEXP controlSEXP, SEXP ptypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    Rcpp::traits::input_parameter< int >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type gammawt(gammawtSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lampath(lampathSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type shwt(shwtSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    Rcpp::traits::input_parameter< int >::type ptype(ptypeSEXP);
    rcpp_result_gen = Rcpp::wrap(robregcc_nsp5(X, y, C, intercept, gammawt, lampath, shwt, control, ptype));
    return rcpp_result_gen;
END_RCPP
}
// robregcc_sp5
Rcpp::List robregcc_sp5(arma::mat X, arma::vec y, arma::mat C, arma::vec paramin, Rcpp::List control, arma::vec shwt, arma::vec lampath, int ptype, double k0, double alpha);
RcppExport SEXP _robregcc_robregcc_sp5(SEXP XSEXP, SEXP ySEXP, SEXP CSEXP, SEXP paraminSEXP, SEXP controlSEXP, SEXP shwtSEXP, SEXP lampathSEXP, SEXP ptypeSEXP, SEXP k0SEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type paramin(paraminSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type shwt(shwtSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lampath(lampathSEXP);
    Rcpp::traits::input_parameter< int >::type ptype(ptypeSEXP);
    Rcpp::traits::input_parameter< double >::type k0(k0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(robregcc_sp5(X, y, C, paramin, control, shwt, lampath, ptype, k0, alpha));
    return rcpp_result_gen;
END_RCPP
}
// c_ridge2
Rcpp::List c_ridge2(arma::mat Xt, arma::vec y, arma::mat C, int nfold, int nlam, Rcpp::List control);
RcppExport SEXP _robregcc_c_ridge2(SEXP XtSEXP, SEXP ySEXP, SEXP CSEXP, SEXP nfoldSEXP, SEXP nlamSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Xt(XtSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    Rcpp::traits::input_parameter< int >::type nfold(nfoldSEXP);
    Rcpp::traits::input_parameter< int >::type nlam(nlamSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ridge2(Xt, y, C, nfold, nlam, control));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_robregcc_nzcount", (DL_FUNC) &_robregcc_nzcount, 1},
    {"_robregcc_softThres", (DL_FUNC) &_robregcc_softThres, 2},
    {"_robregcc_hardThres", (DL_FUNC) &_robregcc_hardThres, 2},
    {"_robregcc_clsq", (DL_FUNC) &_robregcc_clsq, 3},
    {"_robregcc_thresC", (DL_FUNC) &_robregcc_thresC, 3},
    {"_robregcc_classoshe", (DL_FUNC) &_robregcc_classoshe, 6},
    {"_robregcc_classol2", (DL_FUNC) &_robregcc_classol2, 6},
    {"_robregcc_robregcc_nsp5", (DL_FUNC) &_robregcc_robregcc_nsp5, 9},
    {"_robregcc_robregcc_sp5", (DL_FUNC) &_robregcc_robregcc_sp5, 10},
    {"_robregcc_c_ridge2", (DL_FUNC) &_robregcc_c_ridge2, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_robregcc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}