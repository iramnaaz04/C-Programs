// Factorial 
#include <stdio.h>
void main(){
    int i,fact=1;
    for(i=1;i<=5;i++){
        fact = fact*i;
    }
    printf("Factorial is %d\n", fact);
}