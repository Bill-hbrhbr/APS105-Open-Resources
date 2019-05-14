#include <stdio.h>

double power(double x, int n) {
  if (x == 0) {
    if (n == 0) {
      printf("Invalid arguments to power - zero returned\n");
      return 0.0;
    }
    else
      return 0.0;
  }
  
  if (n < 0)
    return 1.0 / power(x, -n);

  if (n == 0)
    return 1.0;

  double temp;
  if (n % 2 == 0) {
    // n is an even positive value
    temp = power(x, n / 2);  
    return temp * temp;
  }
  else {
    // n is an odd positive value
    temp = power(x, (n-1) / 2);
    return x * temp * temp;
  }
}

int main(void) {
  printf("power(3, 5) = %lf\n", power(3.0, 5));
  printf("power(3, 4) = %lf\n", power(3.0, 4));
  printf("power(3, 0) = %lf\n", power(3.0, 0));
  printf("power(3, -1) = %lf\n", power(3.0, -1));
  printf("power(0, 1) = %lf\n", power(0.0, 1));
  printf("power(0, 0) = %lf\n", power(0.0, 0));
}
