#include <stdio.h>
#include <stdlib.h>

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
	int i = 1, prod = 1, error = 0;

	(void)argc;
	while (i < 3)
	{
		if (argv[i] != '\0')
			prod *= atoi(argv[i]);
		else
			error++;
		i++;
	}
	if (error != 0)
		printf("Error\n");
	else
		printf("%d\n", prod);
	return (0);
}
