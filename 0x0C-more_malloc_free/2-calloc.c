#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function name.
 * @str: para1.
 *
 * Return: length of str.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!p)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		ptr[nmemb] = 0;
	return (ptr);
}
