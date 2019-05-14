//
//  main.c
//  aps105-str
//
//  Created by Baochun Li on 2017-03-10.
//  Copyright © 2017 Baochun Li. All rights reserved.
//

#include <stdio.h>

int main(void) {
  const int LENGTH = 5;
  // Declaring and initializing a string as a character array
  char str[LENGTH + 1];
  str[0] = 'H';
  str[1] = 'e';
  str[2] = 'l';
  str[3] = 'l';
  str[4] = 'o';
  str[5] = '\0';
  
  printf("str = %s\n", str);

  // An alternative that is simpler
  char s[] = "Hello";
  printf("s = %s\n", s);

  // If you declare the string without enough space,
  // such as char s[4] = "Hello"; 
  // it will be a compile-time warning and run-time error.
  
  // Declaring and initializing a string as a character pointer

  // What if we change it to the following:
  // const char *t = "Hello"; // changeable pointer to constant characters
  // char * const t = "Hello"; // constant pointer to changeable characters
  // const char * const t = "Hello"; // constant pointer to constant characters
  // What will happen at compile time with the following code?

  char *t = "Hello";
  printf("t = %s\n", t);
  
  // You can change the characters in the string s
  s[1] = 'E';
  printf("s = %s\n", s);
  
  // You can change the pointer variable t to point to another string
  t = "World";
  printf("t = %s\n", t);

  // But you cannot change s to point to another string
  // such as: s = "HELLO";
  // It will be a compile-time error: array type is not assignable
 
  // In addition, you cannot change characters in the string pointed to by t
  // such as: t[1] = 'e';
  // It may cause a segmentation fault or bus error (on Mac OS X)
  // at run time.
  
  // Compare the pointer values to see where these strings are
  printf("The pointer variable s: %p\n", s);
  printf("The pointer variable t: %p\n", t);
  
  t = s;
  printf("t = %s\n", t);
  
  // Now that t points to s, we can safely change the characters
  t[2] = 'L';
  printf("t = %s\n", t);
  
  return 0;
} 
