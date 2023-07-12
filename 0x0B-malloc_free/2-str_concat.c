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
 * str_concat - Function name.
 * @s1: para1.
 * @s2: para2.
 *
 * Return: char.
 */

char *str_concat(char *s1, char *s2)
{
	int size_1 = 0, size_2 = 0, i = 0;
	char *ptr;

	if (s1 == NULL && s2 != NULL)
	{
		size_1 = 0;
		size_2 = _strlen(s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		size_2 = 0;
		size_1 = _strlen(s1);
	}
	else if (s1 != NULL && s2 != NULL)
	{
		size_1 = _strlen(s1);
		size_2 = _strlen(s2);
	}
	else
	{
		;
	}
	ptr = (char *) malloc((size_1 * sizeof(char)) + (size_2 * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size_1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < size_2; i++)
		ptr[i + size_1] = s2[i];
	ptr[size_1 + size_2] = '\0';
	return (ptr);
}
