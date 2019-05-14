#include <stdio.h>

int main(void) {
  // This program finds the largest number in x, y and z, and assigns it to max
  int x, y, z, max;
  printf("Please enter x, y, and z: ");
  scanf("%d%d%d", &x, &y, &z);
  
  if (x >= y) // exclude y
    if (x >= z)
      max = x;
    else
      max = z;
  else // exclude x
    if (y >= z)
      max = y;
    else
      max = z;

  printf("The largest number is %d.\n", max);
}
