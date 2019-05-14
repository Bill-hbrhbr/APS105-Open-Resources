#include <stdio.h>
#include <string.h>

char *stringInString(char *s1, char *s2) {
  char *p = s1;
  // char *endOfString = p + strlen(s1);

  // First alternative -- we can write the while loop as:
  // while (endOfString - p >= strlen(s2) && strncmp(p, s2, strlen(s2)) != 0)
  
  // Second alternative: we can write *(p + strlen(s2) - 1) != '\0' instead of *p != '\0'
  while (*(p + strlen(s2)) != '\0' && strncmp(p, s2, strlen(s2)) != 0) {
    p++;
  }
  
  // First alternative -- we can write:
  // if (endOfString - p < strlen(s2))
  //  return NULL;

  // Second alternative: we can write *(p + strlen(s2) - 1) != '\0' instead of *p != '\0'

  if (*p == '\0')
    return NULL;
  else
    return p;
}
  
int main(void) {
  char s[] = "This is a sample striis";

  printf ("Looking for the string \"is\" in \"%s\"...\n", s);

  // Alternatively, we can also use the strstr() function
  // char *p = strstr(s, "is");

  char *p = stringInString(s, "is");

  while (p != NULL) {
    printf ("Found at %d\n", p - s + 1);
    printf("%d\n", *(p+1));
    p = stringInString(p + 1, "is");
  }

  return 0;
}
