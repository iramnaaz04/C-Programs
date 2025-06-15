// Table of a number 
#include <stdio.h>
void main(){
    int i=1,num,mul;
    printf("Enter number: ");
    scanf("%d", &num);
    do{
        mul=num*i;
        printf("%d\n", mul);
        i++;
    }
    while(i<=10);
}