#include <stdio.h>

/**
 * main - Entry point for a program that finds and prints
 * the first 98 Fibonacci numbers, starting with 1 and 2
 * followed by a new line.
 * No use of long long, malloc, pointers, arrays/tables, or structures
 * You are not allowed to use any other library (You can’t use GMP etc…)
 * Not allowed to hard code any Fibonacci number (except for 1 and 2)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, prev = 1, curr = 2, next;

	printf("%d, %d", prev, curr);

	for (i = 3; i <= 98; i++)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		printf(", %d", next);
	}

	printf("\n");

	return (0);
}
