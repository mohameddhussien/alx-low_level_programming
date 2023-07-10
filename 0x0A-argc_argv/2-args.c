#include "stdio.h"

/**
 * main - Entry point.
 * @argc: para1
 * @argv: para2
 *
 * Description: desc.
 *
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
