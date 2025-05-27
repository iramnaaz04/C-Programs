// Q3]Accept two numbers and do Addition,Subtraction,Multiplictaion,Division and Remainder
#include <stdio.h>
void main(){
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     int sum;
     sum=num1+num2;
     printf("Addition is %d\n: ",sum);

     int subtract;
     subtract=num1-num2;
    printf("Subtraction is %d\n: ",subtract);

    int multiply;
    multiply=num1*num2;
    printf("Multiplication is %d\n:",multiply);

    int divide;
    divide=num1/num2;
    printf("Division is %d\n: ",divide);

    int remainder;
    remainder=num1%num2;
    printf("Remainder is %d\n: ",remainder);
}