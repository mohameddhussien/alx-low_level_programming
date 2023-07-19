#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Function to reset a number to 98.
 * @s: Address parameter.
 *
 * Return: string length.
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		++i;
	}
	return (i);
}

/**
 * _strcpy - strcpy
 * @dest: 1st
 * @src: 2nd
 *
 * Return: Character Address.
 */

char *_strcpy(char *dest, char *src)
{
        int i = 0;

        while (1)
        {
                dest[i] = src[i];
                if (src[i] == 0)
                        break;
                i++;
        }
        return (dest);
}

/**
 * new_dog - Initialize Dog struct.
 * @name: para1.
 * @age: para2.
 * @owner: para3.
 *
 * Return: new instance of dog_t.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!(dog->name))
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!(dog->owner))
	{
		free(dog->name);
		free(dog);
		return (NULL);
        }
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
