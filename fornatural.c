// Calculate sum of first N natural numbers
#include <stdio.h>
void main(){
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1 ; i<=num ; i++){
        sum = sum + i;
    }
    printf("Sum is %d\n", sum);
}