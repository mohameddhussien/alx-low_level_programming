#include "main.h"
#include <stdlib.h>

/**
 * _pow_recursion - Funcation name.
 * @x: para1.
 * @y: para2.
 *
 * Return: n
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (abs(_pow_recursion(x, y - 1)) * x);
	else if (y == 0)
		return (1);
	else
		return (-1);
}
