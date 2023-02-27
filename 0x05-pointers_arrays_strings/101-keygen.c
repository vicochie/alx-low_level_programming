#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int passwor_length = 10;
	char password[password_lenght + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < password_length; i++)
	{
		password[i] = rand() % 26 + 'a';
	}

	password[password_length] = '\0';

	printf("Valid password: %s\n", password);

	return (0);
}

