#include <Rcpp.h>


// [[Rcpp::export]]

int fibonacci(const int x) {
  if (x < 2)
    return x;
  else
    return (fibonacci(x -1) + fibonacci(x-2));
}