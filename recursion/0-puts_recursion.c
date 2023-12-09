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
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n'); /* Print new line when end of string is reached */
return;
}

_putchar(*s); /* Print current character */
_puts_recursion(s + 1); /* Recursively call function with the next character */
}
