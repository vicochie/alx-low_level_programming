#include "main.h"

/**
 * leet - encodes a string int 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	int i, j;
	char *leet_str = str;

	for (i = 0; leet_str[i] != '\0'; i++)
	{
		for (j = 0; "aAeEoOtTlL"[j] != '\0'; j++)
		{
			if (leet_str[i] == "aAeEoOtTlL"[j])
			{
				leet_str[i] = "4 3 0 7 1"[j];
				break;
			}
		}
	}

	return (leet_str);
}
