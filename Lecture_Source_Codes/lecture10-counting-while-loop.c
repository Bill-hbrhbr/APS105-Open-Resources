#include <stdio.h>

int main(void) {
  int n = 1, sum = 0;
  
  while (n <= 10) {
     sum = sum + n;
     n++;
  }
  
  printf("1 + 2 + ... + 10 = %d\n", sum);
  return 0;
}
