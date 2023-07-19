#include "3-calc.h"

/**
 * main - Entry point
 * @argc: count
 * @argv: values
 *
 * Description: main function.
 *
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int (*func_call)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func_call = get_op_func(argv[2]);
	if (!func_call)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func_call(a, b));
	return (0);
}
