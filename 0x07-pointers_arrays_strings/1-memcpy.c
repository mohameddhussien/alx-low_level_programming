#include "main.h"

/**
 * _memcpy - Function name.
 * @dest: para1
 * @src: para2
 * @n: para3
 *
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0, n > 0; i++, n--)
		dest[i] = src[i];
	return (dest);
}
