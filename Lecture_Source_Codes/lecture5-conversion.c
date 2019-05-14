#include <stdio.h>

// This program converts inches to centimetres

// The assumption is that user input is valid.

int main(void) {
    const double InchesToCMs = 2.54;
    double inputInches, outputCMs;
    
    printf("Enter the number of inches to convert: ");
    scanf("%lf", &inputInches);
    
    outputCMs = inputInches * InchesToCMs;
    
    // .2 means 2 digits after the decimal point 
    printf("The number of centimetres is %.2lf\n", outputCMs);
  return 0;
}
