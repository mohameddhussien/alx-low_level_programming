#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function name.
 * @nmemb: para1.
 * @size: para2.
 *
 * Return: ptr.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

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
