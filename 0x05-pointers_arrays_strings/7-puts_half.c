#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half -Prints ha;f of a string, followed by a new line.
 * @str: A pointer to the striong to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i, n;

	if (len % 2 == 0)
	{
		n = len / 2;
	}

	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
