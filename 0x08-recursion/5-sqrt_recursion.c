#include "main.h"

/**
 * _sqrt_recursion - Function name.
 * @n: para1.
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - Fun
 * @n: 1
 * @val: 2
 * Return: 1
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
