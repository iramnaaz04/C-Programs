// Greater numberr using function
#include <stdio.h>
int greater(int a, int b, int c){
    (a > b) ? printf("%d is greater",a) :
    (b > c) ? printf("%d is greater",b) :
    (c > a) ? printf("%d is greater",c):
    printf("All are equal");
}
int main(){
    int num1,num2,num3;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    greater(num1, num2, num3);
}