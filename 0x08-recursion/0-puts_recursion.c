#include "main.h"

/**
 * _puts_recursion - Funcation name.
 * @s: para1.
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
