// Reverse 10-1
#include <stdio.h>
int main() {
    /*for (int i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }*/
    int i,num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(i=num; i>= 1; i--){
        printf("%d\n", i);
    }
    return 0;
}
