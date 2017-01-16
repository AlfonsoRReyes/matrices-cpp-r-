#include <Rcpp.h> 

RcppExport  SEXP  matprod7( SEXP X_, SEXP Y_){
  Rcpp:: NumericMatrix X(X_);
  Rcpp:: NumericMatrix Y(Y_);
  Rcpp:: NumericMatrix  ans (X.nrow(), Y.ncol ());
  int ii, jj, kk;
  for (ii=0; ii<X.nrow (); ii++){
    for (jj=0; jj<Y.ncol (); jj++){
      double  sum = 0;
      for (kk=0; kk<X.ncol (); kk++){
        sum += X(ii, kk) * Y(kk, jj);
      }
      ans(ii,jj) = sum;
    }
  }
  return(ans);
}