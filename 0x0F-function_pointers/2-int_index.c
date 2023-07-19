#include "function_pointers.h"

/**
 * int_index - Function name.
 * @array: array of numbers..
 * @size: size of array.
 * @cmp: print in digit or hexadecimal
 *
 * Return: integar index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int found_index = -1, i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				found_index = i;
				break;
			}
		}
	}
	if (found_index == -1)
	{
		return (-1);
	}
	return (found_index);
}
