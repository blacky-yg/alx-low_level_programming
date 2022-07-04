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
	dog_t *d = malloc(sizeof(dog_t *));

	if (!d)
		return (NULL);
	d->age = age;
	d->name = name;
	d->owner = owner;
	return (d);
}
