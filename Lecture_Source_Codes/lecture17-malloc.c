#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numStudents;
  printf("Enter the number of students: ");
  scanf("%d", &numStudents);

  int *marks;
  marks = malloc(numStudents * sizeof(int));

  if (marks == NULL) 
    printf("Error: The number of students does not fit into the main memory.\n");
  else {
      for (int i = 0; i < numStudents; i ++) 
        scanf("%d", &marks[i]);

      for (int i = 0; i < numStudents; i ++) 
        printf("%d\n", marks[i]);

      // **memory leak** if we forget to call free() below
      free(marks);
  }
  
  return 0;
}
