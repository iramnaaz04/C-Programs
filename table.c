// Table using while loop
#include <stdio.h>
void main(){
    int i=1,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= 10){
        
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
}