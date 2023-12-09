#include "main.h"

/**
 * sqrt_recursive - Recursively finds the natural square root of a number.
 * @n: The number to find the square root of.
 * @i: The current value to check if it's the square root of n.
 *
 * Return: Square root n. If n doesn't have natural square root, returns -1.
 */
int sqrt_recursive(int n, int i)
{
if (i * i == n)
{
return (i); /* If the square of i equals n, i is the square root */
}
else if (i * i > n)
{
return (-1); /* If square of i is < n, n doesn't have natural square root */
}
else
{
return (sqrt_recursive(n, i + 1)); /* Recursively search for the square root */
}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: Square root n. If n does not have natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1); /* Return -1 n negative (no square root for negative numbers) */
}
else if (n == 0)
{
return (0); /* Square root of 0 is 0 */
}
else
{
return (sqrt_recursive(n, 1)); /* Start recursive search from 1 */
}
}
