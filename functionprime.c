// Prime number using function
#include <stdio.h>
void prime(int num);  // Function prototype
int main(){
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    prime(no);
}

void prime(int num){
    int i = 2;
    for(i = 2; i < num; i++){
        if(num % i == 0){
            printf("Not a prime number\n");
        }
        i++;
    }
    if(i==num){
        printf("Prime number\n");
    }
}