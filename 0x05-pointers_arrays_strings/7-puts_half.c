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
	int a, n, longy;

	longy = 0;
	for (a = 0; str[a] != '\0'; a++)
	{
		longy++;
	}

	n = (longy / 2);
	if ((longy % 2) == 1)
	{
		n = ((longy + 1) / 2);
	}

	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

