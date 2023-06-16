#include <stdio.h>

/**
 * main - Entry function point
 *
 * Description: print all numbers of base 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
