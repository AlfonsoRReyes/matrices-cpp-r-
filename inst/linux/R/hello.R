dyn.load("src/hello.so")
hello <- function(n) {
  .C("hello", as.integer(n))
}
