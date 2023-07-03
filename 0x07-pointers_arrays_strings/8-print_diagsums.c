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
int i, sum1, sum2;

sum1 = 0;
sum2 = 0;

for (i = 0; i < (size * size); i++)
{
if (i % (size + 1) == 0)
sum1 += a[i];
if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
sum2 += a[i];

}
printf("%d\n", sum1);
printf("%d,", sum2);
}
