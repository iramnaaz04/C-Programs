// Factorial 
    // using recursion
#include <stdio.h>
int factorial(int n){
    if(n == 0 || n == 1) 
        return 1;
    else
        return n * factorial(n - 1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d\n", &n);
    printf("Factorial is: %d\n", factorial(n));
    return 0;
}