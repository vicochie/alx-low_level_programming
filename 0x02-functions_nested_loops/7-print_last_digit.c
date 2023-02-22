#include "main.h"

/**
 * print_last_digit - A program that prints the last digit of a number
 * @n: The integer whose last digit is to be printed
 *
 * Return: The last digit of n
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	n = -n;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
