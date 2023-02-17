#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space. Numbers should be
 * printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');

if (i == 8 && j == 9)
break;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}

