#include "main.h"

/**
 * _isalpha - Function to check for lowercase alphabets.
 * @c: Character to check.
 *
 * Return: 1 if c is alphabetic or 0 if otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
