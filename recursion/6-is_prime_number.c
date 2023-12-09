#include "main.h"

/**
 * is_prime_recursive - Checks if a number is a prime number.
 * @n: The number to check for primality.
 * @i: The current divisor to check if n is divisible by.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_recursive(int n, int i)
{
if (n < 2 || n % i == 0)
{
if (n == 2)
return (1);
return (0);
}
if (i * i > n)
return (1);
return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - Return 1 input integer prime number, otherwise returns 0.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_recursive(n, 2));
}
