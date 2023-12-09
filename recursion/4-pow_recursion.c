#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 * Return: x raised to the power of y. If y is lower than 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1); /* Return -1 to indicate an error if y is negative */
}
else if (y == 0)
{
return (1); /* Any number raised to the power of 0 is 1 */
}
else
{
return (x * _pow_recursion(x, y - 1)); /* Calculate x^y using recursion */
}
}
