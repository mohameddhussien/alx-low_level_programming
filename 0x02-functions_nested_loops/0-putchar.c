#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Documentation: Documentation for all upcoming projects.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
