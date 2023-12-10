#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and sets memory to zero
 * @nmemb: Number of elements
 * @size: Size in bytes of each element
 *
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{ /* Function implementation remains the same */
void *ptr;
unsigned int total_size;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;

ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

/* Set memory to zero using the standard function memset */
memset(ptr, 0, total_size);

return (ptr);
}
