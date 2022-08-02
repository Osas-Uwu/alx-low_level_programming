#include "dog.h"

/**
 * init_dog - initalize a variable of type struct dog
 * @d: dog struct
 * @name: dogs identity
 * @owner: dog caregiver
 * @age: dog age
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
