#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: Index first element which cmp function does not return 0
 *         -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int (i);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}

return (-1);
}
