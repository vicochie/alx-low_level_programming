#include "main.h"

/**
 * _islower - this program checks if character is lowercase
 * @c: the character to be checked
 * Return: 1 if c is lowercse, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
