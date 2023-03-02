#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */

char *rot13(char *s)
{
	char *p = s;
	int i, j;
	char c;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; (c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[j]); j++)
		{
			if (s[i] == c)
			{
				s[i] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"[j];
				break;
			}
		}
	}

	return (p);
}
