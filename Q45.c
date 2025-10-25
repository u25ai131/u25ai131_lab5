/*(A GUESSING GAME): With this program the user has to guess a number that
the program has picked as the lucky number. It uses one for loop and plenty of if
statements. I’ve also thrown in a conditional operator, just to make sure you
haven’t forgotten how to use it! */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, luckyNumber;
    int attempts;


    srand(time(0));
    luckyNumber = rand() % 10 + 1;

    printf("=== GUESSING GAME ===\n");
    printf("I'm thinking of a number between 1 and 10.\n");
    printf("Can you guess what it is?\n");


    for (attempts = 1; attempts <= 5; attempts++) {
        printf("\nAttempt %d: Enter your guess: ", attempts);
        scanf("%d", &guess);


        if (guess == luckyNumber) {
            printf("🎉 Congratulations! You guessed it right!\n");
            break;
        } else if (guess > luckyNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Too low! Try again.\n");
        }


        printf("%s\n", (attempts == 5) ? "No more attempts left!" : "Keep trying...");
    }

    
    if (guess != luckyNumber)
        printf("\n💡 The lucky number was %d.\nBetter luck next time!\n", luckyNumber);

    return 0;
}
