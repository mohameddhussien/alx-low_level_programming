#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - Function name.
 * @n: para1.
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n >= 0)
		return sqrt(n);
	else
		return (-1);
}
