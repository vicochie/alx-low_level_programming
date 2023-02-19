#include <stdio.h>

/**
 * main - Entry point for a program that prints
 * all possible combinations of single-digit numbers.
 * numbers must br separated by , followed by space
 * Numbers should be printed in ascending order
 * only use the putchar function
 * All code should be in the main function
 * No char variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
