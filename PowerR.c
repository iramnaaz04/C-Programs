//Power
    // using recursion
#include <stdio.h>
int poww(int num, int power){
    if(power == 0)
        return 1;
    else
        return num * poww(num, power - 1);  // Recursive step
}

int main(){
    int no, expo;
    printf("Enter number: ");
    scanf("%d", &no);
    printf("Enter exponent: ");
    scanf("%d", &expo);
    printf("%d raised to %d is: %d", no, expo, poww(no, expo));
    return 0;
}
