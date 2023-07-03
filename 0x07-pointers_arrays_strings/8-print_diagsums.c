#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
*
* @a: pointer to 2D array.
* @size: which diagonal to add.
*
* Return: always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
int i, s1, s2;

s1 = s2 = 0;
for (i = 0; i < (size * size); i += size + 1)
s1 += a[i];
for (i = size - 1; i < (size * size - 1); i += size - 1)
s2 += a[i];
printf("%d\n", s1);
printf("%d,", s2);
}
