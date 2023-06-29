#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Function name.
 * @dest: para1
 * @src: para2
 * Return: Concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i, n1 = strlen(dest), n2 = strlen(src);

	i = 0;
	for (i = 0; i < n2; i++)
		dest[n1 + i] = src[i];
	dest[n1 + n2] = '\0';
	return (dest);
}
