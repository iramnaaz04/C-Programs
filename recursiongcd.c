// Gcd 
    // using recursion
#include <stdio.h>
int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main(){
    int no1;
    printf("Enter first number: ");
    scanf("%d", &no1);
    int no2;
    printf("Enter second number: ");
    scanf("%d", &no2);
    printf("Gcd is: %d\n", gcd(no1, no2));
    return 0;
}