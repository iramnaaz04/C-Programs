// Multiplication using function
#include <stdio.h>
int mul(int a, int b){
    int multi;
    multi = a * b ;
    return multi;
}
int main(){
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d", &num1); 
    printf("Enter second number: ");
    scanf("%d", &num2);
    int result = mul(num1, num2);
    printf("%d x %d is %d\n", num1, num2, result);
}