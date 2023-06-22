#include "main.h"

/**
 * print_most_numbers - function to print all except 2 and 4
*/

void print_most_numbers(void)
{
	int i;

	for(i = 0; i < 10; i++)
		if (i + '0' != '4' || i + '0' != '2')
			_putchar(i + '0');
	_putchar('\n');
}
