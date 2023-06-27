#include "main.h"
/**
* print_array - a function that prints n number
* of elements of an array
*
* @a: spring parameter to be read
*
* @n: read parameter of of elements
*
* Return: always 0
*/
void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < (n - 1) ; i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
