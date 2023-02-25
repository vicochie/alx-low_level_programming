#include "main.h"

/**
 * print_line - draws a straight line of length n
 * @n: the number of times the character '_' shoild be printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
