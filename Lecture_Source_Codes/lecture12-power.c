#include <stdio.h>
#include <math.h>

double power(double x, int n) {
  return pow(x, n);
}

int main(void) {
  double x = power(2, -2.7);
  printf("%lf", x);
}
