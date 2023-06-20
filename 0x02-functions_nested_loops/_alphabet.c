#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Function to print alphabets.
*/

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(str[i]);
	putchar('\n');
}

