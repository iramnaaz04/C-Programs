//Swap without using third variable
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

printf("After swapping: ");
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b= %d\n", a, b);
    return 0;
}