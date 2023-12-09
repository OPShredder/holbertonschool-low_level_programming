#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to find the length of.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0); /* Return 0 when end of string is reached */
}
else
{
/* Recursively call function with the next character and add 1 to the count */
return (1 + _strlen_recursion(s + 1));
}
}
