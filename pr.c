// Prime using while
#include <stdio.h>
void main(){
    int src,dest;
    printf("Enter source: ");
    scanf("%d",&src);
    printf("Enter destination: ");
    scanf("%d", &dest);
    while (src < dest){
        int i = src;
        if(i==src)
            printf("Prime number: %d\n", i);
        else
            printf("Not a prime number: %d\n", i);
        i++;
        if (i > dest){
            break;
        }
    }
}