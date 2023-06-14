#include <stdio.h>
#include "bwave.h"

char * createAccount()
{
	char *firstname[50], lastname[50];

	printf("Please create an account \nEnter your first and last names here: ");
	scanf("%s %s", *firstname, lastname);

	return *firstname;

}
