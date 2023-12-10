#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, multiplies two numbers
 * @argc: The number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int result = 0;

if (argc != 3)
{
printf("Error\n");
return (1);
}

result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);

return (0);
}
