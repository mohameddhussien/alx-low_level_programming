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
	char *ch3;

	for (i = 0; i < n1; i++)
		ch3[i] = dest[i];
	for (i = 0; i < n2; i++)
		ch3[n1 + i] = src[i];
	return (ch3);
}
