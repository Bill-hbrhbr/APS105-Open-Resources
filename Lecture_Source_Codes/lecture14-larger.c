#include <stdio.h>

void swap(int *m, int *n) {
  int temp = *m;
  *m = *n;
  *n = temp;
}

int *larger(int *m, int *n) {
  if (*m > *n) 
    return m;
  else
    return n;
}

int main(void) {
    int x = 3, y = 4;
    int *a, *b;
    a = &x;
    b = &y;
    *a = 6;
    *b = *b + 3;

    swap(&x, &y); // or equivalently: swap(a, b);
    printf("%d %d\n", x, y);

    printf("larger = %d\n", *larger(&x, &y));
}
