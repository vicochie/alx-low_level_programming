#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prinnts every other caharacter of a string.
 * @str: A pointer to the stro=ing to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
