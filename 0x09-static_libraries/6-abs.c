#include "main.h"

/**
 * _abs - Function to check for lowercase alphabets.
 * @n: integar to check
 *
 * Return: (n) n greater than 0, (0) n equal 0, (-n) n smaller than 0
*/

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (-n);
}
