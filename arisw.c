// Using switch case for arithmetic operations
#include <stdio.h>
void main(){
    int num1,num2, result;
    char choice;
    printf("Enter your choice ( +, -, *, /): ");
    scanf(" %c",&choice);

    switch (choice){
        case '+':
         printf("Enter first number:" );
         scanf("%d", &num1);
         printf("Enter second number: ");
         scanf("%d", &num2);
            result = num1 + num2;
            printf("Result: %d",result);
            break;
        case '-':
         printf("Enter first number:" );
         scanf("%d", &num1);
         printf("Enter second number: ");
         scanf("%d", &num2);
            result = num1 - num2;
            printf("Result: %d",result);
            break;
        case '*':
         printf("Enter first number:" );
         scanf("%d", &num1);
         printf("Enter second number: ");
         scanf("%d", &num2);
            result = num1 * num2;
            printf("Result: %d",result);
            break;
        case '/':
         printf("Enter first number:" );
         scanf("%d", &num1);
         printf("Enter second number: ");
         scanf("%d", &num2);
        result = num1 / num2;
        printf("Result: %d",result);
        break;
        
        default:
            printf("Please use operators which are mentioned above.\n");
    }
}