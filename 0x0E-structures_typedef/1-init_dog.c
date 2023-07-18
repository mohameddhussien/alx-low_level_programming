#include "dog.h"

/**
 * init_dog - Initialize Dog struct.
 * @d: struct obj.
 * @name: new name.
 * @age: new age.
 * @owner: new owner.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
