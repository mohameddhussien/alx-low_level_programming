#include "main.h"

/**
 * print_last_digit - Function to check for lowercase alphabets.
 * @n: integar to check
 *
 * Return: (rem)
*/

int print_last_digit(int n)
{
	long long rem;

	if (n > 0)
		rem = n % 10;
	else if (n < 0)
		rem = (-n) % 10;
	else
		rem = 0;
	_putchar(rem + '0');
	return (rem);
}
