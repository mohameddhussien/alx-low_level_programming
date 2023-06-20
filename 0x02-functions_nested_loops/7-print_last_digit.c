#include "main.h"

/**
 * print_last_digit - Function to check for lowercase alphabets.
 * @n: integar to check
 *
 * Return: (rem)
*/

int print_last_digit(int n)
{
	int rem;

	if (n < 0)
		rem = -1 * (n % 10);
	else
		rem = n % 10;
	_putchar(rem + '0');
	return (rem);
}
