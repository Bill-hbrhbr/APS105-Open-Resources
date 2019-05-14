#include <stdio.h>

// Car Rental

// This C program reads in the daily rate, the number of rental days,
// and prints the eligible free rental days and the total rental 
// charge, tax inclusive.

// Note: Every 4-day block in a rental period is counted as 3 days.

// Assumption: All input are valid.

int main(void) {
    double dailyRate;
    int numOfDays;
    const double HST = 0.13;
    
    printf("Enter the daily rate: ");
    scanf("%lf", &dailyRate);
    
    printf("Enter the number of days: ");
    scanf("%d", &numOfDays);
    
    int freeDays = numOfDays / 4;
    
    printf("The number of free days that you have enjoyed is: %d\n", freeDays);
    
    double totalCharge = (numOfDays - freeDays) * dailyRate * (1 + HST);
    printf("The total charge for your rental is: %.2lf\n", totalCharge);
    printf("Thank you for your business.\n");
	return 0;
}

