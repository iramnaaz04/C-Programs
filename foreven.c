//Even numbers from 1 - 20
#include <stdio.h>
void main(){
    int i =2;
    printf("Even numbers from 1 to 20:\n");
    for(i=2;i<=20;i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
}