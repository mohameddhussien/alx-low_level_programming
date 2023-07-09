#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Function name.
 * @dest: para1
 * @src: para2
 * @n: bytes to concat.
 *
 * Return: Concatenated string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, n2 = strlen(src);

	if (n <= n2)
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	else
	{
		for (i = 0; i < n2; i++)
			dest[i] = src[i];
		for (i = n2; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}
