#include "main.h"

/**
 * _memset - Fills first n bytes of memory area pointed by s with constant byte
 * @s: Pointer to the memory area
 * @b: Constant byte to be filled
 * @n: Number of bytes to be filled
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
