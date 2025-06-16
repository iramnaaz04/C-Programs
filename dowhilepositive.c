// Keep asking for a positive number until given
#include <stdio.h>
int main() {
    int num;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    } while (num <= 0);
    printf("You entered a valid number: %d", num);
    return 0;
}
