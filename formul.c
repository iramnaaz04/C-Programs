// Multiplication table using for loop
#include <stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n ", num, i, num * i);
    }
}