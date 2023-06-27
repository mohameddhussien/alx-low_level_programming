#include "main.h"

/**
 * _strlen - Function to reset a number to 98.
 * @s: Address parameter.
 *
 * Return: string length.
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		++i;
	}
	return (i);
}
