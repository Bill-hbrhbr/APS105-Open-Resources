#include <stdio.h>

int main(void) {
  // declare a 2D static array of char (as in lab 7 and lab 8)
  char board[26][26]; 
  int dimension;

  printf("Enter the board dimension: ");
  scanf("%d", &dimension);

  for (int row = 0; row < dimension; row++) {
    for (int col = 0; col < dimension; col++) {
      // initialize the array elements to 'U'
      board[row][col] = 'U';
      printf("%c", board[row][col]);
    }
    printf("\n");
  }
    
  return 0;
}
