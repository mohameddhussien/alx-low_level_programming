#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Function name.
 * @dest: para1
 * @src: para2
 * @n: bytes to concat.
 *
 * Return: Concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, n1 = strlen(dest), n2 = strlen(src);

	if (n <= n2)
		for (i = 0; i < n; i++)
			dest[n1 + i] = src[i];
	else
	{
		for (i = 0; i < n2; i++)
			dest[n1 + i] = src[i];
		dest[n1 + n2] = '\0';
	}
	return (dest);
}
