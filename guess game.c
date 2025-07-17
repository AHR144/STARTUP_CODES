#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    const int max_attempts = 7;

    // Initialize random seed

    number = (39) % 100 + 1;  // random number between 1 and 100

    printf("Guess the number (between 1 and 100). You have 7 attempts!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high!\n");
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts!\n", attempts);
            break;
        }

    } while (attempts < max_attempts);

    if (guess != number) {
        printf("Game Over! The correct number was %d.\n", number);
    }

    return 0;
}
