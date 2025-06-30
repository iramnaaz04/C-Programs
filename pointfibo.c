// Fibonacci series using pointer
#include <stdio.h>
int fibo(int *n1, *n2, *n3){
    int i,num;
    while (i <= num)
{
    printf("%d\n", *n1);
    *n3 = *n1 + *n2;
    *n1 = *n2;
    *n2 = *n3;
    i++;
}
}
int main(){
    int no,i=0;
    printf("Enter number: ");
    scanf("%d", &no);
    int n1 = 0,n2 = 1, n3;
    printf("Fibonacci series up to %d terms: \n", no);
    fibo(&n1, &n2, &n3);
    return 0;
}