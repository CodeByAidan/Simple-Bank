#include <stdio.h>
#include <stdlib.h>
#include "BankAccount.h"

BankAccount* create_account(char *name, double initial_balance)
{
	BankAccount *new_account = (BankAccount*) malloc(sizeof(BankAccount));
	new_account->name = name;
	new_account->balance = initial_balance;
	return new_account;
}

void deposit(BankAccount *account, double amount)
{
	printf("Previous Balance: $%.2f\n", account->balance);
	account->balance += amount;
	printf("+$%.2f deposited.\n", amount);
	printf("New Balance: $%.2f\n", account->balance);
	printf("-----------------------\n");
}

void withdraw(BankAccount *account, double amount)
{
	printf("Previous Balance: $%.2f\n", account->balance);
	if (amount > account->balance)
	{
		printf("Insufficient funds to withdraw $%.2f.\n", amount);
	}
	else
	{
		account->balance -= amount;
		printf("-$%.2f withdrawn.\n", amount);
	}

	printf("New Balance: $%.2f\n", account->balance);
	printf("-----------------------\n");
}

void display_account(BankAccount *account)
{
	printf("Name: %s\n", account->name);
	printf("Current Balance: $%.2f\n", account->balance);
	printf("-----------------------\n");
}
