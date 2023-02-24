/**
 * _isupper -checks if a character is uppercase
 * @c: character to be checked by issupper
 * Return: 1 if its uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
