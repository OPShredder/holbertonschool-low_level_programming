#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: The 2D array (square matrix)
 * @size: The size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, diag_sum1 = 0, diag_sum2 = 0;

	for (i = 0; i < size; i++)
	{
		diag_sum1 += a[(size + 1) * i];
		diag_sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", diag_sum1, diag_sum2);
}
