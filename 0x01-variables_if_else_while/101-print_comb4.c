#include <stdio.h>

/**
 * main - Entry point for a program that prints
 * all possible different combinations of three digits.
 * Numbers must be separated by , followed by a space
 * The three digits must be different
 * Only use putchar
 * All the code should be in the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, s, t;

	for (f = 0; f <= 9; f++)
	{
		for (s = f + 1; s <= 9; s++)
		{
			for (t = s + 1; t <= 9; t++)
			{
				putchar(f + '0');
				putchar(s + '0');
				putchar(t + '0');

				if (f < 7 || s < 8 || t < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
