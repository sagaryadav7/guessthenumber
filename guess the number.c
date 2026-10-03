#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int guess = 0;
    int tries = 0;
    int min = 10;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    do {
        printf("Guess no. between %d-%d: ", min, max);
        
        int result = scanf("%d", &guess);
        tries++;

        if (guess > answer) {
            printf("Too high!\n");
        } else if (guess < answer) {
            printf("Too low!\n");
        } else {
            printf("CORRECT!\n");
        }

    } while (guess != answer);

    if (guess == answer) {
        printf("Answer: %d\n", answer);
        printf("Guesses: %d\n", tries);
    }

    return 0;
}