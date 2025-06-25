// Simple calculator using switch statement
#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+': printf("Result = %.2f", a + b); break;
        case '-': printf("Result = %.2f", a - b); break;
        case '*': printf("Result = %.2f", a * b); break;
        case '/': 
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Cannot divide by zero");
            break;
        default: printf("Invalid operator");
    }
    return 0;
}
