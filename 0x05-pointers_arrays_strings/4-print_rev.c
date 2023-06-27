#include "main.h"

/**
 * print_rev - Function to reverse a str..
 * @s: Address parameter.
*/
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
		i++;
	i--;
	while (*(s + i) != 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
