// Fibonacci series
#include <stdio.h>
void main(){
    int n,first=0,second=1,next,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fibonacci series up to %d terms: \n",n);
    for(i=0;i<n;i++){
        if (i<=1){
            next=i;
        }
        else{
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d",next);

    }
}