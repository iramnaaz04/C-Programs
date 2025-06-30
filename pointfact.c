// Pointer factorial
#include <stdio.h>
int fact(int *a){
    int num = 1;
    for(int i = 1; i <= *a; i++){
        num = num * i;
    }
    return num;
}
int main(){
    int no,factorial;
    printf("Enter a number: ");
    scanf("%d", &no);
    factorial = fact(&no);
    printf("Factorial is: %d\n", factorial);
}