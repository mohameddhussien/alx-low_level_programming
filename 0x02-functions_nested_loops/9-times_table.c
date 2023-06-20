#include "main.h"

/**
 * times_table - Function to print the multiplication table of integars.
*/
void times_table(void)
{
	int row, col, n, rem;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			n = row * col;
			rem = n % 10;
			if (n == rem)
			{
				_putchar(n + '0');
				if (col < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				n = n / 10;
				_putchar(n + '0');
				_putchar(rem + '0');
				if (col < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
