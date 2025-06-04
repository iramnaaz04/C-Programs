// Sum of natural numbers
#include <stdio.h>
void main(){
    int n,sum=0,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n){
        sum = sum + i;
        i++;
    }
    printf("Sum is %d", sum);
}