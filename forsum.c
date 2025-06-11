// Sum of first 10 natural numbers
#include <stdio.h>
void main(){
    int i=1,sum=0;
    for(i=1;i<=10;i++){
        sum = sum + i;
    }
    printf("Sum of first 10 natural numbers is %d\n", sum);
    // Alternative using while loop
    int j = 1, total = 0;
    while(j <= 10){
        total = total + j;
        j++;
    }
    printf("Sum of first 10 natural numbers is %d\n", total);
}