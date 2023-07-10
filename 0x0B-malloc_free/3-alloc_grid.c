#include <stdlib.h>
#include "main.h"

/*
* **alloc_grid - function that creates a 2-D array of ints
*
* @width: width of matrix
* @height: height of matrix
* Description: creates a two dimensional array of ints
*
* Return: pointer to 2-D array of ints matrix (success), Null (error)
*/

int **alloc_grid(int width, int height)
{
int i, j;
int **p;

i = j = 0;
if (height < 1)
return (NULL);
p = (int **)malloc(height * sizeof(p));
if (p == NULL)
{
free(p);
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (j = 0; j < i; j++)
free(p[j]);
free(p);
return (NULL);
}
for (j = 0; j < width; j++)
p[i][j] = 0;
}
return (p);
}
