#include "main.h"

/**
 * _abs - A program computint value of an integer
 * @n: The integer whose absolute value is computed
 *
 * Return: Absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
