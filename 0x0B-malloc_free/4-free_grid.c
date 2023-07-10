#include "main.h"
#include <stdlib.h>

/**
* free_grid - function that frees the memory allocate for the matrix
*
* @grid: pointer to matrix to free
* @height: height of matrix
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
