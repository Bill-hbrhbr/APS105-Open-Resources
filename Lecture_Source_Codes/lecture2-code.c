#include <stdio.h>

int main(void) {
	printf("Enter an input number: ");
	
	int input;
	scanf("%d", &input);

	int output;
	output = input * 7;    
	printf("%d * 7 is %d\n", input, output);

	return 0;
}
