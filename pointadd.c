// Add using pointer
#include <stdio.h>
int add(int *a, int *b){
    int sum=0;
    sum = *a + *b;
    return sum;
}

int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Sum is: %d\n",add(&num1,&num2));
}