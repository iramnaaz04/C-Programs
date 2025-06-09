//ATM Stimulation
#include <stdio.h>

int main() {
    int choice, pin;
    const int correctPIN = 1234;
    float balance = 1000.0;
    float deposit, withdraw;

    // One-time PIN check
    printf("Enter your 4-digit ATM PIN: ");
    scanf("%d", &pin);

    if (pin != correctPIN) {
        printf(" Incorrect PIN. Access denied.\n");
        return 0;
    }

    printf("PIN verified. Welcome to the ATM!\n");

    // ATM Menu
    while (1) {
        printf("\n===== ATM Menu =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: %.f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%f", &deposit);
                if (deposit > 0) {
                    balance += deposit;
                    printf("Deposit successful. New balance: %.f\n", balance);
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &withdraw);
                if (withdraw > 0 && withdraw <= balance) {
                    balance -= withdraw;
                    printf("Withdrawal successful. Remaining balance: %.f\n", balance);
                } else {
                    printf("Invalid or insufficient balance!\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
