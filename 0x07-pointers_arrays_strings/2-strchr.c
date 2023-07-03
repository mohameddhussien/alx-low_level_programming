#include "main.h"

/**
 * _strchr - Function name.
 * @s: para1
 * @c: para2
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
		i++;
	}
	return ('\0');
}
