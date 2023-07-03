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

	for (i = 0; accept[i] != '\0'; i++)
		for (j = 0; s[j] != '\0'; j++)
			if (accept[i] == s[j])
				return (j + 1);
	return (j);
}
