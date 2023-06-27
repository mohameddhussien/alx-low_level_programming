#include "main.h"

/**
 * rev_string - Function to reverse a string.
 * @s: Address parameter.
*/
void rev_string(char *s)
{
	int i = 0, SI, temp;

	while (s[i] != 0)
		++i;
	SI = --i;
	i = 0;
	while (i <= SI / 2)
	{
		temp = s[i];
		s[i] = s[SI - i];
		s[SI - i] = temp;
		i++;
	}
}
