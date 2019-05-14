#include <stdio.h>

int factorial(int n); // forward declaration

int main(void) {
  int n = 5; // The scope of 'n' is the main() function
  printf("%d\n", factorial(n));
}

int factorial(int n) {
  int product = 1;
  
  for (int i = 1; i <= n; i++) {
  	product = product * i;
  }

  return product;
}