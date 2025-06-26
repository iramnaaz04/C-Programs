// Reverse using pointer
#include <stdio.h>
int reve(int *num) {
    int n = *num;
    int rev = 0;
    
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    
    *num = rev;  // store the reversed number back
    return 0;
}

int main() {
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    
    reve(&no);
    printf("Reversed number is: %d\n", no);
    
    return 0;
}
