#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer that stores the result
 * @size_r: size of buffer
 *
 * Return: pointer to buffer r containing the result or 0 if
 * result cannot be stored
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, len = 0, digit, carry = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (len1 >= size_r || len2 >= size_r ||
			(len1 + 1 >= size_r && len2 + 1 >= size_r))
		return (0);
	r[size_r - 1] = '\0';
	len = size_r - 2;
	len1--;
	len2--;

	while (len1 >= 0 || len2 >= 0)
	{
		digit = carry;
		if (len1 >= 0)
			digit += n1[len1--] - '0';
		if (len2 >= 0)
			digit += n2[len2--] - '0';

		if (digit > 9)
		{
			carry = 1;
			digit -= 10;
		}
		else
			carry = 0;

		r[len--] = digit + '0';
	}

	if (carry == 1)
	{
		if (len < 0)
			return (0);
		r[len--] = carry + '0';
	}

	return (r + len + 1);
}
