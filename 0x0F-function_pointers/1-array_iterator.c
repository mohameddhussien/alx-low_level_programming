#include "function_pointers.h"

/**
 * array_iterator - Function name.
 * @array: array of numbers..
 * @size: size of array.
 * @action: print in digit or hexadecimal
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
