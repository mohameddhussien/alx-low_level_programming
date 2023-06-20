#include "main.h"

/**
 * print_sign - Function to check for lowercase alphabets.
 * @n: integar to check
 *
 * Return: (1) n greater than 0, (0) n equal 0, (-1) n smaller than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}