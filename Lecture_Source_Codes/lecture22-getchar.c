#include <stdio.h>

void getStringFromUserInput(char *s, int maxStrLength) {
  char c;
  int i = 0;
  
  // c = getchar();
  // while (i < maxStrLength && c != '\n') {
  //   s[i++] = c;
  //   c = getchar();
  // }

  while (i < maxStrLength && (c = getchar()) != '\n')
    s[i++] = c;

  s[i] = '\0';
}

int main(void) {
  const int maxLength = 5;

  char s[maxLength + 1];
  getStringFromUserInput(s, maxLength);
  printf("The string is: %s\n", s);

  return 0;
}
