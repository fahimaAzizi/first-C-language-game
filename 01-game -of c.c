#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    int lower = 1, upper = 100;

    // Initialize random number generator
    srand(time(0));
    number = (rand() % (upper - lower + 1)) + lower;  // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between %d and %d.\n", lower, upper);

    // Loop until the player guesses correctly
    do {
        attempts++;
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
