#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array.
 * @array: array to iterate through
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
