#include <stdio.h>

int func(int n) {
  if (n == 0)
    return 3;
  else
    return 2 * func(n-1) + 1;
}

int factorial(int n) {
  if (n < 0) {
    printf("Invalid argument to factorial.\n");
    return 0;
  }
  else if (n == 0)
    return 1;
  else 
    return n * factorial(n-1);
}

int gcd(int m, int n) {
  if (m == n) 
    return m;
  else if (m > n) 
    return gcd(n, m - n);
  else 
    return gcd(n, m);
}

int gcdv2(int m, int n) {
  if (n == 0)
    return m;
  return 
    gcdv2(n, m % n);
}

void printRow(int n) {
  if (n < 1)
    printf("\n");
  else {
    printf("*");
    printRow(n - 1);
  }
}

void printTriangle(int n) {
  if (n > 0) {
    printRow(n);
    printTriangle(n - 1);
  }
}

void printTrianglev2(int n) {
  if (n > 0) {
    printTrianglev2(n - 1);
    printRow(n);
  }
}

void printPattern(int n) {
  if (n <= 0)
    return;
  if (n == 1) 
    printRow(1);
  else {
    printRow(n);
    printPattern(n - 1);
    printRow(n);
  }
}

int main(void) {
  printf("func(5) = %d\n", func(5));
  printf("factorial(5) = %d\n", factorial(5));
  printf("gcd(6, 4) = %d\n", gcd(6, 4));
  printf("gcdv2(6, 4) = %d\n", gcdv2(6, 4));

  printRow(5);
  printf("\n");
  printTriangle(5);
  printf("\n");
  printTrianglev2(5);
  printf("\n");
  printPattern(5);
}
