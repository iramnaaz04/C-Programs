// Natural numbers using pointer
#include <stdio.h>
int natural(int *num){
    if(*num > 0)
        return 1;
    else
        return 0;
}
int main(){
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    if(natural(&no)){
        printf("%d is a natural number\n", no);
    }
    else{
        printf("%d is not a natural number\n", no);
    }
}