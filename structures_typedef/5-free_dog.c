#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees memory allocated for a dog structure
* @d: Pointer to the dog structure
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name); /* Free the memory allocated for the name */
free(d->owner); /* Free the memory allocated for the owner */
free(d); /* Free the memory allocated for the structure itself */
}
}
