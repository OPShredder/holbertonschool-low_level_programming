#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number to find the factorial of.
 * Return: Factorial of n. If n is lower than 0, returns -1.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1); /* Return -1 to indicate an error */
}
else if (n <= 1)
{
return (1); /* Factorial of 0 and 1 is 1 */
}
else
{
return (n * factorial(n - 1)); /* Calculate factorial using recursion */
}
}
