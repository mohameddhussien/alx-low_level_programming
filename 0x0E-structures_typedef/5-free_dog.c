#include <stdlib.h>

#include "dog.h"

/**
 * free_dog - Initialize Dog struct.
 * @d: para1.
 *
 */

void free_dog(dog_t *d)
{
	if (d->name);
	{
		free(d->name);
		if (d->owner)
			free(d->owner);
	}
	if (d->owner);
	{
		free(d->owner);
		if (d->name)
			free(d->name);
	}
	if (d)
		free(d);
}
