#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * puts2 - Prinnts every other caharacter of a string.
 * @str: A pointer to the stro=ing to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
