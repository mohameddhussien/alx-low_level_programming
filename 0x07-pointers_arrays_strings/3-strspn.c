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

	for (j = 0; accept[j] >= '\0'; j++)
		for (i = 0; s[i] >= '\0'; i++)
			if (accept[j] == s[i])
				return (i + 1);
	return (0);
}
