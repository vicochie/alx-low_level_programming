#include <stdio.h>

/**
 * main - Entry point of the program that prints single digit number of
 * base 10 starting from 0, followed by a new line
 * no char variable, only use putchar function and only twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');

	return (0);
}
