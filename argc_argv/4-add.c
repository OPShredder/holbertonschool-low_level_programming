#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Checks if the string is a positive number
 * @str: String to check
 *
 * Return: 1 if positive number, 0 if not
 */
int is_positive_number(char *str)
{
if (*str == '\0')
return (0);

while (*str)
{
if (!isdigit(*str))
return (0);
str++;
}
return (1);
}

/**
 * main - Entry point, adds positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (!is_positive_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
