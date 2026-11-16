#ifndef UI_H
#define UI_H

#include "account.h"

// Input handling functions
int read_integer(const char *prompt);
double read_double(const char *prompt);
void read_string(const char *prompt, char *buffer, int size);

// Display functions
void display_main_menu(void);
void display_accounts(Account *head);
void display_account_details(Account *account);

// Account operations menu
void account_operations_menu(Account *head, Account *selected);

#endif
