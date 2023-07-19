#include "function_pointers.h"

/**
 * print_name - Function name.
 * @name: name to print.
 * @f: uppercase or as it is.
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
