//Multiplication table 
#include <stdio.h>
void main(){
    int num,i;
    printf("Enter the number for multiplication table: ");
    scanf("%d",&num);
    printf("Multiplication table for %d is\n: ",num);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
}