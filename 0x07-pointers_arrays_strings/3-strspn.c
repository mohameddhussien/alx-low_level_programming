#include "main.h"

/**
 * _strspn - Function name.
 * @s: para1
 * @accept: para2
 *
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != s[i]; j++)
			if (accept[j] == '\0')
				return (i);
	return (i);
}
