#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the caharacter c to stdout
 * @c: The caharacter to be printed
 *
 * Return: On success 1.
 * On error, -1 is retuned and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
