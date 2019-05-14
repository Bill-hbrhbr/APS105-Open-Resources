#include <stdio.h>
#include <math.h>

int main(void) {
  double x;
  printf("Enter x: ");
  scanf("%lf", &x);
  printf("The square root of x = %.2lf\n", sqrt(x));
  return 0;
}
