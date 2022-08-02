#ifndef DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - printed struct dog
 * @d: dog struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age == NULL)
	{
		printf("age: (nil)\n");
	}
	else
	{
		printf("age: %s\n", d->age);
	}

	if (d->owner == NULL)
	{
		print("owner: (nil)\n");
	}
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
