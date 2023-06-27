#include "main.h"
#include <stdio.h>

/**
 * print_array - Function to reset a number to 98.
 * @a: Address.
 * @n: size of arr.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		else
			putchar('\n');
	}
}
