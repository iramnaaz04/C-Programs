// Sum of natural numbers 1 - N 
        //  (using recursion)
#include <stdio.h>
int sum(int n){
    if(n == 0)
        return 0;
    else 
        return n + sum(n-1);
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Sum is: %d\n", sum(a));
    return 0;
}