#include <stdio.h>

void skipALine(void) {
	printf("\n");
}

void skipLines(int numLines) {
	for (int i = 1; i <= numLines; i++) {
		printf("\n");
	}
}

int main(void) {
	printf("Calling skipALine().");
	skipALine();

	printf("Calling skipLines() to skip 5 lines.");
	skipLines(5);

    int numLinesToSkip = 5;
	printf("Calling skipLines() to skip (numLinesToSkip + 1) lines.");
	skipLines(numLinesToSkip + 1);

	return 0;
}