#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Initialize Dog struct.
 * @d: struct obj.
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("%f\n", (*d).age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
