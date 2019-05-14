#include <stdio.h>

// This program prints a variety of patterns using nested for loops

int main(void) {
  const int numRows = 5;

  // Pattern 1 -- assuming that we wish to have 5 rows
  // 1
  // 12
  // 123
  // 1234
  // 12345
  
  for (int row = 1; row <= numRows; row++) {
    for (int col = 1; col <= row; col++)
      printf("%d", col);
    printf("\n");
  }

  printf("\n");

  // Pattern 2 -- assuming that we wish to have 5 rows
  // *****
  // ****
  // ***
  // **
  // *

  for (int row = 1; row <= numRows; row++) {
    for (int col = 1; col <= numRows - row + 1; col++)
      printf("*");
    printf("\n");
  }

  printf("\n");

  // Pattern 3
  //     *
  //    **
  //   ***
  //  ****
  // *****

  for (int row = 1; row <= numRows; row++) {
    for (int col = 1; col <= numRows; col++)
      if (row + col <= numRows)
        printf(" ");
      else
        printf("*");
    printf("\n");
  }

  return 0;
}
