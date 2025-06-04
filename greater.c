// Q5]Accept two numbers and find out greater number
#include <stdio.h>
void main(){
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    if (n1 > n2){
        printf("%d is greater\n");
    }
    else if (n2 > n1){
        printf("%d is greater\n", n2);
    }
    else{
        printf("Both are equal");
    }
}