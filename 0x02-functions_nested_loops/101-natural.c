#include "main.h"

/**
 * sum_multiples - Computes the sum of all multiples of 3 or 5 below n
 * @n: the upper limit (excluded)
 *
 * Return: the sum of all multiples of 3 or 5 below n
 */

int sum_multiples(int n)
{
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return (sum);
}

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */

void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * main - entry point of the code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum;

	sum = sum_multiples(1024);

	print_number(sum);
	_putchar('\n');

	return (0);
}
