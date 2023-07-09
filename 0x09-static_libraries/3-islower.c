#include "main.h"

/**
 * _islower - Function to check for lowercase alphabets.
 * @c: check for this character if it's lowercase
 *
 * Return: (1) if lowercase else (0)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
