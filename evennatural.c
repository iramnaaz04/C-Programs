// Even natural from 1 to N
#include <stdio.h>

void main() {
    int n, i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    while(i <= n) {
        if(i % 2 == 0) {
            printf("\t%d\n ", i);
        }
        i++;
    }
}
