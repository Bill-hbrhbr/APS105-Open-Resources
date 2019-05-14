#include <stdio.h>

void swap(int *i, int *j) {
  int temp = *i;
  *i = *j;
  *j = temp;
}

int main(void) {
  int x = 3, y = 5;

  swap(&x, &y);
  printf("%d, %d\n", x, y);
  
  return 0;
}
