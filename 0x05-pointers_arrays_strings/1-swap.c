#include "main.h"

/**
 * swap_int - Function to swap 2 numbers.
 * @a: address of num1.
 * @b: address of num2.
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
