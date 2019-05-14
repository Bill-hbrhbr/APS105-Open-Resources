#include <stdio.h>
#include <stdbool.h>

void swap(int list[], int left, int right) {
   int t = list[right];
   list[right] = list[left];
   list[left] = t;
}

int partition(int list[], int low, int high) {
   int pivot = low, left = low, right = high;

   while (true) {
       while (list[left] < list[pivot])
           left++;
       while (list[right] > list[pivot])
           right--;
       printf("left = %d, right = %d\n", left, right);
       if (left < right)
           swap(list, left, right);
       else
           return right;
   }
}

void quicksort(int list[], int low, int high)
{
   int i;
   if (high > low) {
      int pivot = partition(list, low, high);
      for (i = 0; i < 13; i ++)
          printf("%d ", list[i]);
      printf("\n");
      quicksort(list, low, pivot - 1);
      quicksort(list, pivot + 1, high);
   }
}

int main(void) {
   int i, list[13] = {61, 46, 12, 63, 52, 91, 27, 55, 74, 14, 71, 37, 87};
   quicksort(list, 0, 12);
   for (i = 0; i < 13; i ++)
       printf("%d ", list[i]);
   printf("\n");
   return 0;
}
