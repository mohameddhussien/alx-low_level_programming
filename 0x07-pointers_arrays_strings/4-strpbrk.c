#include "main.h"

/**
 * _strpbrk - Function name.
 * @s: para1
 * @accept: para2
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
	return ('\0');
}
