// FIrst n natural numbers using do while loop
#include <stdio.h>
void main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int i=1;
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
}