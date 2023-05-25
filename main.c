#include <stdio.h>
#include <stdlib.h>
#include "BankAccount.h"

int main() {
	BankAccount *john = create_account("John Doe", 500.0);
	BankAccount *jane = create_account("Jane Doe", 500.0);

	printf("\nInitial Balances:\n");
	printf("-----------------------\n");
	display_account(john);
	display_account(jane);

	printf("\nTransactions:\n");
	printf("-----------------------\n");

	printf("Depositing $200.00 into John Doe's account:\n");
	deposit(john, 200.0);

	printf("Depositing $1.00 into Jane Doe's account:\n");
	deposit(jane, 1.0);

	printf("Withdrawing $700.00 from John Doe's account:\n");
	withdraw(john, 700.0);

	printf("Withdrawing $239.00 from Jane Doe's account:\n");
	withdraw(jane, 239.0);

	printf("Attempting to withdraw $50.00 from John Doe's account:\n");
	withdraw(john, 50.0);

	printf("Withdrawing $50.00 from Jane Doe's account:\n");
	withdraw(jane, 50.0);

	printf("\nFinal Balances:\n");
	printf("-----------------------\n");
	display_account(john);
	display_account(jane);

	free(john);
	free(jane);

	return 0;
}