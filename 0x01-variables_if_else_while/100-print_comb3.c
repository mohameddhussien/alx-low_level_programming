#include <stdio.h>

/**
 * main - Entry function point
 *
 * Description: print 0, 1 - 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int ch1 = 0, ch2 = 0;

	while (ch1 <= 9)
	{
		putchar(ch1 + '0');
		while (ch2 <= 9)
		{
			if (ch1 == ch2)
				continue;
			putchar(ch2 + '0');
			if (ch2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			ch2++;
		}
		ch1++;
	}
	putchar('\n');
	return (0);
}
