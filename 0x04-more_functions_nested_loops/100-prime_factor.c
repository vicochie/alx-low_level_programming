#include <stdio.h>
#include <math.h>

int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}

	printf("%ld\n", i);

	printf("\n");

	return (0);
}
