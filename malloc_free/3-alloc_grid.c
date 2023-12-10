#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2D array of integers or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = (int **)malloc(sizeof(int *) * height);

if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/* Free the previously allocated memory if malloc fails */
while (i >= 0)
free(grid[i--]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;  /* Initialize each element to 0 */
}

return (grid);
}
