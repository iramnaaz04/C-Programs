// Count digits
#include <stdio.h>
void main(){
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0){
        n = n / 10; // Remove the last digit
        count++;    // Increment the count
    }
    printf("Number of digits: %d\n", count);
}