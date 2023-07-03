#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function name.
 * @a: para1
 * @size: para2
 *
 */

void print_diagsums(int *a, int size)
{
	int i, D1 = 0, D2 = 0;

	for (i = 0; i < size; i++)
	{
		D1 += a[i];
		D2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", D1, D2);
}
