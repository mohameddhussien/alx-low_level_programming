#include "main.h"
#include <string.h>

/**
 * _strcmp - Function name.
 * @s1: para1
 * @s2: para2
 *
 * Return: Difference ASCII codes from s2 to s1.
 */

int _strcmp(char *s1, char *s2)
{
	int i, n1 = strlen(s1), n2 = strlen(s2), sum = 0;

	if (n1 >= n2)
	{
		for (i = 0; i < n2; i++)
			if (s1[i] != s2[i])
			{
				sum = s1[i] - s2[i];
				break;
			}
	}
	else
	{
		for (i = 0; i < n1; i++)
			if (s1[i] != s2[i])
			{
				sum = s1[i] - s2[i];
				break;
			}
	}
	return (sum);
}
