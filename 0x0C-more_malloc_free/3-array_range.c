#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function name.
 * @min: para1.
 * @max: para2.
 *
 * Return: int *.
 */

int *array_range(int min, int max)
{
	int i, len = max - min + 1;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = min++;
	return (p);
}
