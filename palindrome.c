// Palindrome using for loop
#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
