// Print factorial of a number
#include <stdio.h>
void main(){
    int num,fact=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
    printf("Factorial of %d is %d\n",fact,num);
    printf("Factorial calculated successfully!!");
}