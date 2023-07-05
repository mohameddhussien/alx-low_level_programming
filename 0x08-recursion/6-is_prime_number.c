#include "main.h"
#include <stdlib.h>

/**
 * _pow_recursion - Funcation name.
 * @x: para1.
 * @y: para2.
 *
 * Return: n
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - Fun
 * @n: para1.
 * @d: para2.
 * Return: 1 or 0
 */

int prime(int n, int d)
{
	if (d >= n && n > 1)
		return (1);
	else if (n % d == 0 || n <= 1)
		return (0);
	else
		return(prime(n, d + 1));
}
