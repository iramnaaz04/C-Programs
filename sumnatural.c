// Sum of first n natural numbers using do while loop
#include <stdio.h>
void main(){
    int sum=0,i=1,num;
    printf("Enter value of num: ");
    scanf("%d", &num);
    do{
        sum = sum + i;
        i++;
    }
    while(i<=num);
        printf("Sum is %d",sum);
}