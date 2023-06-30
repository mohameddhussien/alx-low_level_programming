#include "main.h"

/**
 * rot13 - function.
 * @c: character.
 * Return: 1 or 0.
 */

char *rot13(char *c)
{
	char *cp = c;
	char k[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char K[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	while (*c)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*c == k[i])
			{
				*c = K[i];
				break;
			}
		}
		c++;
	}
	return (cp);
}
