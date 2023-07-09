#include "main.h"

/**
 * _memset - Function name.
 * @s: para1
 * @b: para2
 * @n: para3
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
		s[i] = b;
	return (s);
}
