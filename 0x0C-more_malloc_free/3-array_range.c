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
	int i = 0;
	int *p;

	if (min < max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	return (p);
}
