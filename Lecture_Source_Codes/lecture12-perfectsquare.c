#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Good
bool isPerfectSquareGood(int n) {
  bool result;

  if ((int) sqrt(n) * (int) sqrt(n) == n) {
    result = true;
  } else {
  	result = false;
  }

  return result;
}

// Better
bool isPerfectSquareBetter(int n) {
  if ((int) sqrt(n) * (int) sqrt(n) == n)
    return true;
  else
    return false;
}

// Best
bool isPerfectSquare(int n) {
  return (int) sqrt(n) * (int) sqrt(n) == n;
}

int main(void) {
  printf("Is 25 a perfect square? %d\n", isPerfectSquare(25));
  printf("Is 26 a perfect square? %d\n", isPerfectSquare(26));
}

