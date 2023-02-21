#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
