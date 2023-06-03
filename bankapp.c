#include <stdio.h>
#include <string.h>

int main()
{
	char option;
	double balance = 500.00;

	printf("\n hello, welcom to the simple bank app by itmasterdesigne \n");
	
	char firstname[50], lastname[50];

	printf("Please create an account \nEnter your first and last name here: ");
	scanf("%s %s", firstname, lastname);

	char pass[20];
	char val[20];
	int value;
	int i = 3;
	int passwordcorrect = 0; //flag var to track correct password validation.

	printf("Create a password: ");
	scanf("%s", pass);

	printf("Confirm a password :");
	scanf("%s", val);

	value = strcmp(pass, val);
	
	if (value != 0)
		while (i >= 0)
		{
			printf("\n Your password dont match\033[0m \n");
			printf("Try again, re-enter password \n");
			scanf("%s", val);

			value = strcmp(pass, val);

			if ( value == 0)
        		{
                		passwordcorrect = 1;
				break;
        		}
			if (i > 0) 
				printf("Password dont match. you have %d more attempts\033[0;31m \n", i);
			 else 
				printf("Sorry. you cant create an account");
				i--;
		}
	else
		passwordcorrect = 1;

	if (passwordcorrect) {
	printf("Your password is correct. welcome\033[0;32m %s \033[0m to instant banking with bankapp by itmasterdesigne \n", firstname);
	printf("You have a fixed amount of\033[0;32m %f \033[0m dh bonus. what do you want to do with it? \n", balance);
	
	while (1){
	printf("Menu: \n");
	printf("a . Transfer money \n");
	printf("b . Deposit money \n");
	printf("c . Check balance \n");
	printf("d . Quite the program \n");
	
	printf("Select an potion: ");
	scanf(" %c", &option);
	
	switch (option){
		case 'a' :
			printf("Option a: Transfer money \n");
		/*	transferMoney(&balance, &lastTransferAmount); */
			break;
		case 'b' :
			printf("Option b: Desposit money \n");
			/* add code to desposite money */
			break;
		 case 'c' :
                        printf("Option c: Check Balance \n");
                        /* add code to Check balance */
                        break;
		 case 'd' :
                        printf("Option d: Quite the program \n");
                        return 0;
		default:
			printf("Invalid option. Please try again. \n");
		
		}

	}
	
	
	
	
	
	
	}
	
}
