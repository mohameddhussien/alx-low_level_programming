#include "main.h"
#include <string.h>

/**
 * reverse_array - Function name.
 * @a: para1
 * @n: para2
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	if (n % 2 == 0)
		for (i = 0; i < (n / 2); i++)
		{
			temp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
		}
	else
		for (i = 0; i < (n - 1) / 2; i++)
		{
			temp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
		}
}
