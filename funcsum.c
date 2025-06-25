// Sum using function
#include <stdio.h>
int sum(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}
int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    int result = sum(num1, num2);
    printf("The sum of %d and %d is %d\n", num1, num2, result);
}