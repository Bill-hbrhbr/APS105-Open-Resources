// This program is a kind of roulette betting game in a casino.  The user 
// guesses whether a random number generated between 1 and 36 will be even or odd.
// The random number is generated and then checked to see if it was what the
// user guessed.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
    int guess;
    
    srand(time(NULL));
    
    while (true) {
        printf("Enter your bet, even or odd? (0 for even, 1 for odd): ");
        scanf("%d", &guess);
        
        int spin = rand() % 36 + 1;
        
        if (spin % 2 == guess) {
            printf("You win!\n");
        } else {
            printf("You lose!\n");
        }
    }
    
    return 0;
}

