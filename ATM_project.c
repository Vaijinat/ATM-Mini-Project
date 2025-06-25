#include<stdio.h>
int main()
{
	int pin,attempt=0,choice;
	float balance=1000.0,amount;
	const int correct_pin=1234;

	//PIN verification
	while(attempt<3)
	{
		printf("Enter your 4-digit PIN: ");
		scanf("%d",&pin);
		if(pin==correct_pin)
			break;
		else
		{
			printf("Invalid PIN. Try again.\n");
			attempt++;
		}
	}
	if(attempt==3)
	{
		printf("Too many attempts. Exiting ...\n");
		return 0;
	}
	do
	{
		printf("\n ATM Main menu:\n");
		printf("1. check Balance\n");
		printf("2. Deposit\n");
		printf("3. Withdraw\n");
		printf("4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Your balance: %.2f\n",balance);
				break;
			case 2:
				printf("Enter amount to deposit: ");
				scanf("%f",&amount);
				if(amount>0)
					balance+=amount;
				else
					printf("invalid Amount.\n");
				break;
			case 3:
				printf("Enter the amount to withdraw: ");
				scanf("%f",&amount);
				if(amount>0&&amount<=balance)
					balance-=amount;
				else
					printf("Insufficient balance \n");
				break;
			case 4:
				printf("Thank you for using the ATM.Goodbye!\n");
				break;
			default:
				printf("Invalid choice. Try againg.\n");
		}

	}while(choice!=4);
	return 0;
}
