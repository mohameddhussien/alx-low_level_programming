#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - Function to check for multiples of 5 or 3 or both.
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
}
