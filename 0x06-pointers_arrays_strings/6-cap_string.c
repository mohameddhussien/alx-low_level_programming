#include "main.h"
/**
 * isLower - lower.
 * @c - ch.
 *
 * Return: 1, 0.
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimit - Function name.
 * @c: param1
 *
 * Return: bool 1 0.
*/
int isDelimit(char c)
{
	int i = 0;
	char delimit[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimit[i])
			return (1);
	return (0);
}

/**
 * cap_string - Function name.
 * @s: para1
 *
 * Return: return statement.
 */
char *cap_string(char *s)
{
	int found = 1;

	while (*s)
	{
		if (isDelimit(*s))
			found = 1;
		else if (isLower(*s) && found)
		{
			*s -= 32;
			found = 0;
		}
		else
			found = 0;
		s++;
	}
	return (s);
}
