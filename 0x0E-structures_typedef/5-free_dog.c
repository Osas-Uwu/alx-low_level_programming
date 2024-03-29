#include "dog.h"

/**
 * free_dog - free memory created with malloc
 * @d: memory to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
