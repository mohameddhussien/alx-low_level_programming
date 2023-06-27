#include "main.h"

/**
 * _strcpy - strcpy
 * @dest: 1st
 * @src: 2nd
 *
 * Return: Character Address.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];
		if (src[i] == 0)
			break;
		i++;
	}
	return (dest);
}
