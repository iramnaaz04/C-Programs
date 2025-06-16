// Guess the secret word
#include <stdio.h>
#include <string.h>
int main() {
    char guess[20];
    do {
        printf("Guess the secret word: ");
        scanf("%s", guess);
    } while (strcmp(guess, "Apple") != 0);

    printf("Correct! You guessed the secret word.\n");
    return 0;
}
