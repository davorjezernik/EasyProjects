#include <stdio.h>

int main() {
    double balance = 1000.0;
    int option;
    double amount;

    printf("Welcome to the ATM Banking System\n");

    while (1) {
        printf("\n1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Your balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter the amount to deposit: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful. Your new balance is: $%.2f\n", balance);
                } else {
                    printf("Invalid amount for deposit.\n");
                }
                break;
            case 3:
                printf("Enter the amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful. Your new balance is: $%.2f\n", balance);
                } else {
                    printf("Invalid amount for withdrawal or insufficient balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using ATM Banking System.\n");
                return 0;
            default:
                printf("Invalid option. Please choose a valid option.\n");
        }
    }

    return 0;
}
