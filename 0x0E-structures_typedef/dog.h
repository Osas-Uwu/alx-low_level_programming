#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - assigned new data type
 * @name: dogs identity
 * @owner: dog caregiver
 * @age: dogs numbers of years
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - new nickname for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
