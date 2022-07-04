#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: create a new dog
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_cpy;
	char *owner_cpy;
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
	{
		free(d);
		return (NULL);
	}
	name_cpy = strdup(name);
	owner_cpy = strdup(owner);
	d->age = age;
	d->name = name_cpy;
	d->owner = owner_cpy;
	return (d);
}
