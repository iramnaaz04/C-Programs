//even odd
#include <stdio.h>
void main(){

    int num1,choice;
    printf("Enter 1 for even or odd: ");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        printf("Enter a number: ");
        scanf("%d",&num1);
        if(num1 % 2 == 0){
            printf("%d is an even number\n", num1);
        }
        else{
            printf("%d is an odd number\n", num1);
        }
        break;
        default:
        printf("Enter a valid choice please");
}
}
