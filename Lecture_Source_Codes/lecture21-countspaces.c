#include <stdio.h>

int countSpaces(char *s) {
  int numberOfSpaces = 0;

  for (int i = 0; s[i] != '\0'; i ++)
    if (s[i] == ' ')
      numberOfSpaces++;

  return numberOfSpaces;
}

int main(void) {
  char s[] = "Hello World!";
  printf("The string is: %s\n", s);
  printf("The first 5 characters in the string are: %.5s\n", s);
  printf("%d\n", countSpaces(s));

  // Alternatively, we can use puts() to print a string,
  // it automatically appends a newline character
  puts(s);
  return 0;
}
