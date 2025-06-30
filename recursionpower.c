//  Power 
    // using recursion
#include <stdio.h>
int poww(int num, int power);
int poww(int num, int power){
    int i = 1, ans = 1;
    while(i <= power){
        ans = ans * num;
        i++;
    }
    return ans;
}
int main(){
    int no, expo;
    printf("Enter number: ");
    scanf("%d", &no);
    printf("Enter exponent: ");
    scanf("%d", &expo);
    printf("%d raised to %d is: %d",no,expo,poww(no,expo));
    return 0;
}