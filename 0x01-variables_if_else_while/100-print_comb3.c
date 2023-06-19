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
	int ch1 = 0, ch2, CountLoop = 1, i = 0;

	while (ch1 <= 9)
	{
		ch2 = 0;
		while (ch2 <= 9)
		{
			if (i < CountLoop)
			{
				i++;
				ch2++;
				continue;
			}
			putchar(ch1 + '0');
			putchar(ch2 + '0');
			if (ch1 != 8)
			{
				putchar(',');
				putchar(' ');
			}
			ch2++;
		}
		ch1++;
		CountLoop++;
		i = 0;
	}
	putchar('\n');
	return (0);
}
