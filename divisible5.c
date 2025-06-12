// Print numbers divisible by 5
#include <stdio.h>
void main(){
    int i;
    printf("Numbers divisible by 5 from 1 to 100:\n");
    for(i=1;i<=50;i++){
        if(i%5==0){
            printf("%d\n", i*5);
        }
    }
}