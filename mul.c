// Multiplication table from 1 - 10
#include <stdio.h>
void main(){
    int i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            int mul;
            mul = i * j;
            printf("%d \t",mul);
        }
        printf("\n");
    }
}