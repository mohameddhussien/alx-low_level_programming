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
	int i = 0, size = 0;

	while (s[i] != '\0')
	{
		size++;
		i++;
	}
	if (n <= size)
		for (i = 0; i < n; i++)
			s[i] = b;
	else
		for (i = 0; i < size; i++)
			s[i] = b;
	return (s);
}
