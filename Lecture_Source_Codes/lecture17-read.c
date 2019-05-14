#include <stdio.h>
#include <stdlib.h>

void read(int list[], int size)
{
  // sizeof(list) will only provide the number of bytes 
  // in an 'int *' type, we will need to add 'size' as
  // a second parameter to specify the size of the array
  for (int i = 0; i < size; i++)
    scanf("%d", &list[i]);
}

int main(void) {
  const int size = 5;
  int marks[size];

  read(marks, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", marks[i]);
  }

  return 0;
}
