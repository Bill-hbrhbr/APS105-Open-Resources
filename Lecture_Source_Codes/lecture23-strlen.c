#include <stdio.h>

int stringLengthv1(const char *s) {
  int i = 0;

  while (*(s+i) != '\0')
    i++;
  return i;
}

int stringLengthv2(const char *s) {
  int i = 0;
  
  while (*(s+i))
    i++;
  return i;
}

int stringLengthv3(const char *s) {
  const char *t = s;

  while (*t)
    t++;
  return t-s;
}

int main(void) {
  char s[] = "Hello";
  printf("The length of the string is: %d\n", stringLengthv1(s));
  printf("The length of the string is: %d\n", stringLengthv2(s));
  printf("The length of the string is: %d\n", stringLengthv3(s));
  return 0;
}
