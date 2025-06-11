// Multiples from 3-30
#include <stdio.h>
void main(){
    int i;
    for(i=3;i<=30;i++){
        if(i % 3 == 0){ 
        printf("%d\n", i);
        }
    }
}