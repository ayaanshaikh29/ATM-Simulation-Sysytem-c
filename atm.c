#include <stdio.h>
float balance = 10000.00;

void check_balance()
{
    printf ("balance is :% f", balance);
}

void deposit ()
{
    float amount;
    printf ("Enter amount to deposit:");
    scanf("%f",&amount);
    if(amount>0)
    {
        balance += amount;
        printf ("transaction successfull");
    }
    else
    {
        printf ("Invalid amount");
    }
}

void withdraw()
{
    float amount;
    printf ("enter amount to withdraw:");
    scanf ("%f" ,&amount);

if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("transaction successfull.");

    }
    else
    {
        printf("Invalid amount;");
    }
}

int main() 
{
    int choice;

    while (1) {
        printf("\n--- ATM Simulation ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using ATM.\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
