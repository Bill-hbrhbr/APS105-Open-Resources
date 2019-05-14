#include <stdio.h>

int main(void) {
  // Prompting the user to enter a series of integer
  // values, -1 to quit, and print the sum of these values
  
  // This code may not be robust against future changes
  // Example 1: changing the sentinel value -1 to 0
  // Example 2: changing calculating the sum to calculating the product
  // with some initial value that is not 0
  int input = 0, sum = 0;

  while (input != -1) {
    sum = sum + input;
    printf("Enter a value (-1 to stop): ");
    scanf("%d", &input);
  }

  printf("The sum of all values is: %d\n", sum);
  
  return 0;
}
