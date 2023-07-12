#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Function name.
 * @str: para1.
 *
 * Return: length of str.
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strdup - Function name.
 * @str: para1.
 *
 * Return: char.
 */

char *_strdup(char *str)
{
	int j = 0, size;
	char *ptr;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	ptr = (char *) malloc(size * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		if (str[j] != '\0')
			ptr[j] = str[j];
	ptr[j] = '\0';
	return (ptr);
}
