#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Function name.
 * @dest: para1
 * @src: para2
 * @n: bytes to concat.
 *
 * Return: Concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
        int i, n1 = strlen(dest), n2 = strlen(src);

	for (i = 0; i < ; i++)
		dest[n1 + i] = src[i];
	if (n2 < n)
		dest[n1 + n2] = '\0';
	return (dest);
}
