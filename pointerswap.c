// Swap using pointer
#include <stdio.h>
int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Swap: a = %d, b = %d\n", *a, *b);
    return 0;
}
int main(){
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    swap(&num1, &num2);
    return 0;
}