// Factorial using function
#include <stdio.h>
 int fact(int n){
    int fact=1,i;
    for(i=1;i<=n;i++){
    fact = fact * i;
    }
    return fact;
 }
 int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial is: %d", fact(num));
    return 0;
 }