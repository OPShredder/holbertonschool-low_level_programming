#include <stdio.h>

/**
 * main - Entry point, prints all arguments received
 * @argc: The number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
