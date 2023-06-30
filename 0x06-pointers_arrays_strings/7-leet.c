#include "main.h"

/**
 * leet - function.
 * @c: character.
 * Return: 1 or 0.
 */

char *leet(char *c);
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
			if (*c == key[i] || *c == 32 + key[i])
				*c = '0' + value[i];
		c++;
	}
	return (cp);
}
