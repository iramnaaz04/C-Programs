// 1 to N even numbers using pointer
#include <stdio.h>
int Even(int *a){
    int i = 1;
    while(i <= *a){
        if(*a % 2 == 0)
            printf("%d", i);
        i++;
        //     return 1;
        // return 0;
    }
}
int main(){
    int num, isEven;
    printf("Enter a number: ");
    scanf("%d", &num);
    isEven = Even(&num);
    printf("Even numbers from 1 to %d are: ", num);
    for(int i = 1;i<=num;i++){
        if(i % 2 == 0 )
            printf("%d ", i);
    }
}