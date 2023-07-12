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
 * alloc_grid - Function name.
 * @width: para1.
 * @height: para2.
 *
 * Return: int.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **) calloc(height, sizeof(int *));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) calloc(width, sizeof(int));
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
