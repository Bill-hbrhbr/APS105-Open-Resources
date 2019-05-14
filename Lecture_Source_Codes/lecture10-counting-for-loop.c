#include <stdio.h>
#include <stdbool.h>

// This program calculates 1 + 2 + ... + 10 using variations of for loops.

int main(void) {
  int i, sum = 0;
  
  // Normal counting loop
  for (i = 1; i <= 10; i++) {
    sum = sum + i;
  }
  printf("1 + 2 + ... + 10 = %d\n", sum);
  
  sum = 0;
  
  // Declaring variables within the for loop
  for (int j = 1; j <= 10; j++) {
    sum = sum + j;
  }
  printf("1 + 2 + ... + 10 = %d\n", sum);
  
  // Declaring multiple variables within the for loop
  for (int j = 1, total = 0; j <= 10; j++) {
    total = total + j;
    printf("total so far = %d\n", total);
  }

  // Declaring multiple variables within the for loop
  for (int j = 1, grandTotal = 0;
       j <= 10;
       grandTotal = grandTotal + j, printf("grand total so far = %d\n", grandTotal), j++) {
  }

  return 0;
}
