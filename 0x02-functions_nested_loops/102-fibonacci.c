#include <stdio.h>

/**
 * main - Entry for a program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space ,
 * stdlib use is allowed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int Fibo1 = 1, Fibo2 = 2, next_Fibo;

	printf("%ld, %ld", Fibo1, Fibo2);

	for (i = 2; i < 50; i++)
	{
		next_Fibo = Fibo1 + Fibo2;
		printf(", %ld", next_Fibo);
		Fibo1 = Fibo2;
		Fibo2 = next_Fibo;
	}

	printf("\n");

	return (0);
}
