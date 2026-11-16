#include <stdio.h>
#include "ui.h"

int main(void)
{
    Account *head = NULL;
    int choice;

    printf("Welcome to the Banking Application!\n");

    while (1)
    {
        display_main_menu();

        choice = read_integer("Enter your choice: ");

        switch (choice)
        {
            case 1:
                display_accounts(head);
                break;

            case 2:
            {
            char name[50];
            int account_number;
            double balance;

            
            read_string("Enter account holder name: ", name, sizeof(name));
              
            printf("Account holder name: %s\n", name);

            account_number = read_integer("Enter account number: ");

            printf("Account number: %d\n", account_number);

            balance = read_double("Enter initial balance: ");

            printf("Initial balance: %.2f\n", balance);


            break;
            }

            case 3:
            {
            int account_number;

            account_number = read_integer("Enter account number to select: ");

            printf("You entered account number: %d\n", account_number);

            break;
           }
            case 4:
                printf("Exiting Banking Application...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}