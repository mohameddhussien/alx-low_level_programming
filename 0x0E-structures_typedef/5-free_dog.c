#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Initialize Dog struct.
 * @d: para1.
 *
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
