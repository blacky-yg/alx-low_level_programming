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
	dog_t *d;

	d = malloc(sizeof(dog_t));
	name_cpy = strdup(name);
	owner_cpy = strdup(owner);
	if (d && name_cpy && owner_cpy)
	{
		d->age = age;
		d->name = name_cpy;
		d->owner = owner_cpy;
	}
	else
	{
		free(d);
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}
	return (d);
}
