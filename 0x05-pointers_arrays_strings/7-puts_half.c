#include "main.h"

/**
 * puts_half - Function to reset a number to 98.
 * @str: Address parameter.
*/
void puts_half(char *str)
{
	int size, i = 0, n;

	while (str[i] != 0)
		i++;
	size = i;
	i = 0;
	if (size % 2 == 0)
	{
		n = size / 2;
		for (i = n; i < size; i++)
			_putchar(*(str + i));
	}
	else
	{
		n = (size - 1) / 2;
		for (i = n + 1; i < size; i++)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
