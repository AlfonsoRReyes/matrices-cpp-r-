setwd(src)
if (.Platform$OS.type == "windows") dyn.load("hello.dll")
if (.Platform$OS.type == "unix") dyn.load("hello.so")
hello <- function(n) {
  .C("hello", as.integer(n))
}
