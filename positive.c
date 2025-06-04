// Q1]Accept a number and check whether it is +ve or -ve
#include <stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num > 0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
}