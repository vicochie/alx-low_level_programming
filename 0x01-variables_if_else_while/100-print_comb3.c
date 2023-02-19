#include <stdio.h>

/**
 * main - Entry point of a program that prints
 * all possible different combinations of two digits.
 * Numbers must be separated by , followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Only use putchar five times maximum
 * No use of the a char variable
 * All code should be in the main function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int f, s;

	for (f = 0; f <= 9; f++)
	{
		for (s = 0; s <= 9; s++)
		{
			putchar(f + '0');
			putchar(s + '0');
			if (f != 9 || s != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}

