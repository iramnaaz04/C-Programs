// Function to check even and odd
#include <stdio.h>
void checkevenodd(int num){
    if(num%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
}
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    checkevenodd(a);
    return 0;
}