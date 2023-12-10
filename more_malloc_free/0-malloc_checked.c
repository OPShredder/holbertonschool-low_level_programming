#include <stdlib.h>
#include "main.h"  /* Ensure to include the header file with prototypes */

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate
 *
 * Return: A pointer to the allocated memory
 * If malloc fails, the program terminates with status value 98
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98); /* Terminate the process with status 98 if malloc fails */
}

return (ptr);
}
