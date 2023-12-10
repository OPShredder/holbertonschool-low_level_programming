#include "dog.h"

/**
 * init_dog - Initializes a struct dog.
 * @d: Pointer to the struct dog to initialize.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != (struct dog *)0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
