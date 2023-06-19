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
	int ch1 = 0, ch2, ch3;

	while (ch1 <= 9)
	{
		ch2 = 0;
		while (ch2 <= 9)
		{
			ch3 = 0;
			while (ch3 <= 9)
			{
				if (ch1 != ch2 && ch2 != ch3 && ch3 != ch1 && ch2 > ch1 && ch3 > ch2 && ch3 > ch1)
				{
					putchar(ch1 + '0');
					putchar(ch2 + '0');
					putchar(ch3 + '0');
					if (ch1 + ch2 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				ch3++;
			}
			ch2++;
		}
		ch1++;
	}
	putchar('\n');
	return (0);
}
