#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable number of parameters representing the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *current_string;

va_start(args, n);

for (i = 0; i < n; i++)
{
current_string = va_arg(args, char *);

if (current_string != NULL)
printf("%s", current_string);
else
printf("(nil)");

if (separator != NULL && i != n - 1)
printf("%s", separator);
}

printf("\n");

va_end(args);
}
