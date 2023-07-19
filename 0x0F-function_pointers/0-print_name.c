#include "function_pointers.h"

/**
 * print_name - Function name.
 * @name: name to print.
 * @f: uppercase or as it is.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
