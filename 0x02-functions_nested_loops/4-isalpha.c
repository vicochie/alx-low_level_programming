#include "main.h"

/**
 * _isalpha - Checks if a caharcter is alphabetic
 * @c: The character checked
 *
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
