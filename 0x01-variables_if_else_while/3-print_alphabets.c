#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet,
 *              followed by the uppercase alphabet, using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char u;

	for (u = 'a'; u <= 'z'; u++)
	{
		putchar(u);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');

	return (0);
}

