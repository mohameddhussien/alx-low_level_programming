#include "main.h"
#include <string.h>

/**
 * string_toupper - Function name.
 * @str: para1
 *
 * Return: return statement.
 */

char *string_toupper(char *str)
{
	int i, n = strlen(str);

	for (i = 0; i < n; i++)
		if (str[i] > 96)
			str[i] = str[i] - 32;
	return (str);
}
