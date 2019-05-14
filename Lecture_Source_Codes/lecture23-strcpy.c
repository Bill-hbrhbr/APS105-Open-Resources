#include <stdio.h>
#include <string.h>

char * stringCopyv1(char *dest, const char *source) {
  int i = 0;
  while (*(source + i) != '\0') {
    *(dest + i) = *(source + i);
    i++;
  }
  *(dest + i) = '\0';
  return dest;
}
char * stringCopyv2(char *dest, const char *source) {
  char *p = dest;
  while (*source != '\0') {
    *dest = *source;
    dest++;
    source++;
  }
  *dest = '\0';
  return p;
}

char * stringCopyv3(char *dest, const char *source) {
  char *p = dest;
  
  while ((*dest = *source) != '\0') {
    dest++;
    source++;
  }
  return p;
}

char * stringCopyv4(char *dest, const char *source) {
  char *p = dest;

  while ((*dest++ = *source++) != '\0')
    ;
  return p;
}

char * stringCopyv5(char *dest, const char *source) {
  char *p = dest;
  
  while ((*dest++ = *source++))
    ;
  
  return p;
}

char * safeStringCopy(char *dest, const char *source, int maxLength) {
  int i = 0;
  char *p = dest;

  while (i < maxLength && (*dest++ = *source++))
    i++;

  if (i == maxLength) 
    *dest = '\0';
  
  return p;
}

int main(void) {
  const int maxLength = 5;
  char dest[maxLength + 1];
  
  strcpy(dest, "Hello");
  printf("The copied string is: %s\n", dest);

  stringCopyv1(dest, "HEllo");
  printf("The copied string is: %s\n", dest);

  stringCopyv2(dest, "HELlo");
  printf("The copied string is: %s\n", dest);

  stringCopyv3(dest, "HELLo");
  printf("The copied string is: %s\n", dest);

  stringCopyv4(dest, "HELLO");
  printf("The copied string is: %s\n", dest);

  stringCopyv5(dest, "HEllO");
  printf("The copied string is: %s\n", dest);

  safeStringCopy(dest, "HelloWorld", maxLength);
  printf("The copied string is: %s\n", dest);

  return 0;
}
