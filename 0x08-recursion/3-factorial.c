#include "main.h"
#include <stdlib.h>

/**
 * factorial - Funcation name.
 * @n: para1.
 *
 * Return: n
 */

int factorial(int n)
{
	if (n > 0)
		return (abs(factorial(n - 1) * n));
	else
		return (-1);
}
