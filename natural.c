//Write a program to check if the given number is a natural number.
//(Natural numbers start from 1)
#include <stdio.h>
void main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if (number > 0){
        printf("%d is a natural number\n",number);
    }
    else{
        printf("%d is not a natural number\n",number);
    }
    
}