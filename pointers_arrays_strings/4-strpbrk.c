#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched
 * @accept: The bytes to search for
 * Return: Pointer s byte that matches accept bytes, or NULL if no byte found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *ptr = accept;
while (*ptr)
{
if (*s == *ptr)
{
return (s);
}
ptr++;
}
s++;
}

return (NULL);
}
