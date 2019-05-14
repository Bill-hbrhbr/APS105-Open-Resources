#include <stdio.h>
#include <stdbool.h>

void swap(int list[], int i, int j) {
  int temp = list[i];
  list[i] = list[j];
  list[j] = temp;
}

void swapWithPointerArithmetic(int *list, int i, int j) {
  int temp = *(list + i);
  *(list + i) = *(list + j);
  *(list + j) = temp;
}

void read(int list[], int i) {
  scanf("%d", &list[i]);
}

void readWithPointerArithmetic(int *list, int i) {
  scanf("%d", list + i);
}

void printArray(int list[], int size) {
  for (int i = 0; i < size; i++) 
    printf("%d ", list[i]);
  printf("\n");
}

void printArrayWithPointerArithmetic(int *list, int size) {
  for (int *p = list; p < list + size; p++)
    printf("%d ", *p);
  printf("\n");
}

int main(void) {
    int marks[5] = {0, 1, 2, 3, 4};
    
    swap(marks, 0, 1);
    printArray(marks, 5);

    swapWithPointerArithmetic(marks, 2, 3);
    printArrayWithPointerArithmetic(marks, 5);

    read(marks, 0);
    printArray(marks, 5);

    readWithPointerArithmetic(marks, 1);
    printArrayWithPointerArithmetic(marks, 5);
}
