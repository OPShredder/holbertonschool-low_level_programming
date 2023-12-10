#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer duplicated string, or NULL if insufficient memory available
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0;
unsigned int i;

if (str == NULL)
return (NULL);

/* Calculate the length of the string */
while (str[length] != '\0')
length++;

/* Allocate memory for the duplicate string */
duplicate = malloc(sizeof(char) * (length + 1));

if (duplicate == NULL)
return (NULL);

/* Copy the string to the newly allocated memory */
for (i = 0; str[i] != '\0'; i++)
duplicate[i] = str[i];

duplicate[i] = '\0'; /* Null-terminate the duplicate string */

return (duplicate);
}
