#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function name.
 * @size: para1.
 * @c: para2.
 *
 * Return: char.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) calloc(size, sizeof(char));
	int i = 0;

	if (size <= 0)
		return ('\0');
	while (size > 0)
	{
		ptr[i] = c;
		i++;
		size--;
	}
	ptr[i] = '\0';
	return (ptr);
}
