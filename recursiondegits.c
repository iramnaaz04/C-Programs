// Sum of digits of a number 
        // using recursion
#include <stdio.h>
int sum(int n){
if(n==0)
    return 0;
else 
    return n % 10 + sum(n / 10);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum is: %d\n", sum(n));
    return 0;
}
