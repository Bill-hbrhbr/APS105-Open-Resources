#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // declare a 2D array of char to be dynamically allocated on the heap
  char **board;
  int dimension;

  printf("Enter the board dimension: ");
  scanf("%d", &dimension);

  printf("Allocating memory.\n");
  // allocate the 2D array dynamically
  board = (char **) malloc(sizeof(char *) * dimension);
  
  if (board == NULL) {
    // not enough memory
    printf("Out of memory.\n");
    exit(-1);
  }
  
  // allocate each row dynamically
  for (int row = 0; row < dimension; row++) {
    board[row] = (char *) malloc(sizeof(char) * dimension);
    
    if (board[row] == NULL) {
      // not enough memory
      printf("Out of memory.\n");
      exit(-1);
    }
    
    for (int col = 0; col < dimension; col++) {
      // initialize the array elements to 'U'
      board[row][col] = 'U';
      printf("%c", board[row][col]);
    }
    printf("\n");
  }
  
  // free up each row first
  printf("Freeing up memory.\n");
  for (int row = 0; row < dimension; row++) {
    free(board[row]);
  }
  
  // free up the array of character pointers pointing to each row
  free(board);
    
  return 0;
}
