#include "main.h"

/**
 * puts2 - Function to reset a number to 98.
 * @str: Address parameter.
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i += 1;
		if (str[i] == 0)
			break;
		i += 1;
	}
	_putchar('\n');
}
