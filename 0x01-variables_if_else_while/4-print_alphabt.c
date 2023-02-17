#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet,
 *              skipping letters q and e, using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
