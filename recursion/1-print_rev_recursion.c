#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return; /* Return at end of string */
}

_print_rev_recursion(s + 1); /* Recursively call function*/
_putchar(*s); /* Print current character after returning recursive call */
}
