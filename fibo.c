// print fibonacci series  Output should be as :-     0 1 1 2 3 5 8 13 21 34 55 89 using while loop
#include <stdio.h>
void main(){
    int num,n1=0,n2=1,n3,i;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Fibonacci series up to %d terms: \n", num);
    i = 0;
    while (i<=num)
    {
        printf("%d ", n1);
        //printf("%d ", n2);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        i++;
    }
}