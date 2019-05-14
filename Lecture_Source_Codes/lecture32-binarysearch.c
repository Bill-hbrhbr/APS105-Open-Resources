#include <stdio.h>

int binarySearch(int list[], int listLength, int item) {
  int low = 0;
  int high = listLength - 1;
  int middle;

  while (low <= high) {
    middle = (low + high) / 2;
    if (item == list[middle])
      return middle;
    else if (item < list[middle])
      high = middle - 1;
    else
      low = middle + 1;
  }
  return -1;
}

int binSearchHelper(int list[], int item, int low, int high) {
  if (high < low) // failure - item not in list
    return -1;
  
  int middle = (low + high) / 2;
  if (item == list[middle]) // success
    return middle;
  else if (item < list[middle]) // try bottom half
    return binSearchHelper(list, item, low, middle - 1);
  else // try top half
    return binSearchHelper(list, item, middle + 1, high);
}

int recursiveBinarySearch(int list[], int listLength, int item) {
  return binSearchHelper(list, item, 0, listLength - 1);
}

int main(void) {
  int list[] = {3, 5, 6, 7, 9};
  printf("Found 5 at index %d.\n", binarySearch(list, 5, 5));
  printf("Found 7 at index %d.\n", recursiveBinarySearch(list, 5, 7));
}
