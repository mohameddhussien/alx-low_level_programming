#include "main.h"

/**
 * _strstr - Function name.
 * @haystack: para1
 * @needle: para2
 *
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, size = 0, count = 0;

	i = 0;
	while (needle[i] != '\0')
		i++;
	size = i;

	for (i = 0; haystack[i] != '\0'; i++)
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i] == needle[j])
				{
					count++;
					i++;
				}
				else
					break;
			}
			break;
		}
	if (count == size)
		return (needle);
	return ('\0');
}
