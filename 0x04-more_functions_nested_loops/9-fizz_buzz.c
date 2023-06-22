#include "main.h"
#include <stdio.h>

/**
 * main - Function to check for multiples of 5 or 3 or both.
 *
 * Description: To print Fizz buzz instead of multiples of 3 or 5
 *
 * Return: always 0 (success)
 */

int main(void)
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
	return (0);
}
