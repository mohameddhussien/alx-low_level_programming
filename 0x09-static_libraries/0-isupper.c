#include "main.h"

/**
 * _isupper - Function to check for uppercase.
 * @c: integar repreasenting character in ascii
 *
 * Return: 1 for uppercase or 0 lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
