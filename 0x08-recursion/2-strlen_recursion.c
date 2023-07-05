#include "main.h"

/**
 * _strlen_recursion - Funcation name.
 * @s: para1.
 *
 * Return: integar.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
		i += _strlen_recursion(s + 1) + 1;
	return (i);
}
