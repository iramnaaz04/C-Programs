//Add 2 numbers using functions
#include <stdio.h>
int add (int a, int b){
    return a + b;
}
int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d" ,&num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    int sum = add(num1, num2);
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}



// #include <stdio.h>
// void main(){
//     int i=1,n=2;
//     while(n<=10){
//         printf("%d",n*i);
//         i++;
//         n++;
//     }
// }