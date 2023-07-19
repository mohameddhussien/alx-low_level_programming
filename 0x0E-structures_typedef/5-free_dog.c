#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Initialize Dog struct.
 * @d: para1.
 *
 */

void free_dog(dog_t *d)
{
	if (dog->name);
	{
		free(dog->name);
		if (dog->owner)
			free(dog->owner);
	}
	if (dog->owner);
	{
		free(dog->owner);
		if (dog->name)
			free(dog->name);
	}
	if (dog)
		free(dog);
}
