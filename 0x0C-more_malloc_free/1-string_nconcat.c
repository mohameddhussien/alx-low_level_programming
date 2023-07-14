#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Function name.
 * @str: para1.
 *
 * Return: length of str.
 */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - xxxx.
 * @s1: xxxx
 * @s2: xxxx
 * @n: xxxx
 *
 * Return: xxx
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, size_1, size_2;
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
		size_1 = _strlen(s1);
		size_2 = _strlen(s2);
        }
	if (n >= size_2)
	{
		ptr = malloc((sizeof(char) * (size_1 + size_2)) + 1);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < size_1 + size_2; i++)
		{
			if (i < size_1)
				ptr[i] = s1[i];
			else
				ptr[i] = s2[i - size_1];
		}
	}
	else
	{
		ptr = malloc((sizeof(char) * (size_1 + n)) + 1);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < size_1 + n; i++)
		{
			if (i < size_1)
				ptr[i] = s1[i];
			else
				ptr[i] = s2[i - size_1];
		}
	}
	return (ptr);
}
