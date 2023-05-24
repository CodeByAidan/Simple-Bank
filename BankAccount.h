#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

typedef struct BankAccount
{
	char *name;
	double balance;
}

BankAccount;

BankAccount* create_account(char *name, double initial_balance);
void deposit(BankAccount *account, double amount);
void withdraw(BankAccount *account, double amount);
void display_account(BankAccount *account);


#endif
