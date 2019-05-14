#include <stdio.h>

void quickSortHelper(int list[], int low, int high) {
  if (low < high) {
    double pivot = list[low];
    int left = low;
    int right = high;

    while (left < right) {
      while (list[right] >= pivot && left < right)
        right--;
      list[left] = list[right];

      while (list[left] <= pivot && left < right)
        left++;
      list[right] = list[left];
    }
    list[left] = pivot;   // or list[right] - same spot

    quickSortHelper(list, low, left - 1);
    quickSortHelper(list, right + 1, high);
  }
}

void quicksort(int list[], int listLength) {
  quickSortHelper(list, 0, listLength - 1);
}

int main(void) {
  int i, list[13] = {61, 46, 12, 63, 52, 91, 27, 55, 74, 14, 71, 37, 87};
  quicksort(list, 13);
  for (i = 0; i < 13; i ++)
    printf("%d ", list[i]);
  printf("\n");
  return 0;
}
