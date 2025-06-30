// Reverse using pointer
#include <stdio.h>
int reverse(int *a){
    int rev = 0;
    rev = *a % 10;
    *a = *a / 10;
    rev = rev * 10 + *a % 10;
    return rev;
}
int main(){
    int num, Reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    Reversed = reverse(&num);
    printf("Reversed number is: %d\n", Reversed);
}