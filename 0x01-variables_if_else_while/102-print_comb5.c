#include <stdio.h>

/**
 * main - Entry point for a program that prints all possible combinations
 * of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 be printed as 01
 * Combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * only use putchar eight times maximum in your code
 * No use of char variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, s;

	for (f = 0; f <= 99; f++)
	{
		for (s = f + 1; s <= 99; s++)
		{
			putchar(f / 10 + '0');
			putchar(f % 10 + '0');
			putchar(' ');
			putchar(s / 10 + '0');
			putchar(s % 10 + '0');

			if (f < 98 || s < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);

}
