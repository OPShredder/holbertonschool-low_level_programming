#include <stdio.h>

/**
 * main - Entry point, prints the number of arguments passed
 * @argc: The number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argv; /* To avoid the unused parameter warning */
printf("%d\n", argc - 1);
return (0);
}
