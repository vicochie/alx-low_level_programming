#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	l = n % 10;

	printf("Last digit of %d is %d and is ", n, l);
	if (l > 5)
		printf("greater than 5\n");
	else if (l == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}

