//  Decision aid program
//
// The purpose of this program is to help make a decision to issue
// a missile alert in Hawaii or not (or any other decision) by consulting
// three engineers, and seeing what their average confidence 
// is.

// The input is the level of confidence expressed by three people 
// in fractions between 0 and 1.

// The output of the program is a Go/No Go decision based on the 
// average of the three confidence levels.  If the average is greater 
// 70% it is a go.

#include <stdio.h>

int main(void) {
    const double thresholdForAlarm = 0.7;
    
    double confidence1, confidence2, confidence3;
    
    printf("Enter three confidence values between 0 and 1: ");
    scanf("%lf%lf%lf", &confidence1, &confidence2, &confidence3);
    
    // Check if the values entered are between 0 and 1
    if (confidence1 < 0 || confidence1 > 1 || 
        confidence2 < 0 || confidence2 > 1 ||
        confidence3 < 0 || confidence3 > 1) {
        printf("Watch out! Something is very wrong! STOP!\n");
        return 0;
    }
    
    double average = (confidence1 + confidence2 + confidence3) / 3;
    
    printf("The average confidence value is: %lf\n", average);
    
    // 1e-3 is a very small fractional number close to 0, designed to account
    // for incorrect decisions made due to double-precision floating
    // point calculation (test case: 0.7 0.8 0.6)
    if (average - thresholdForAlarm > 1e-3) {
        printf("It is time to issue the missile alarm!\n");
    } else {
        printf("Good luck next time!\n");
    }
    
    return 0;
}
