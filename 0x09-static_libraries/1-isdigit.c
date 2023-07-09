#include "main.h"

/**
 * _isdigit - function to check for digits from 0 to 9
 * @c: integar repreasenting character in ASCII
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
