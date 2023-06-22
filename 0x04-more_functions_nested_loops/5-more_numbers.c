#include "main.h"

/**
 * more_numbers - Function to print 0 - 14 10 times.
*/

void more_numbers(void)
{
	int i, rem, n, loops;

	for (loops = 0; loops < 10 ; loops++)
	{
		for (i = 0; i <= 14; i++)
		{
			rem = -1;
			n = i;
			if (i >= 10)
			{
				rem = n % 10;
				n /= 10;
			}
			_putchar(n + '0');
			if (rem != -1)
				_putchar(rem + '0');
		}
		_putchar('\n');
	}
}
