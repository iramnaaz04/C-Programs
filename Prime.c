// Check whether number is prime number or not
#include <stdio.h>
int main() {
    int num, i = 2, isPrime = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a prime number\n");
        return 0;
    }

    while (i < num) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

return 0;
}
