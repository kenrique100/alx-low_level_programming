#include "main.h"
/**
* reverse_array - function to reverse an array
*
* @a: array input parameter
*
* @n: number of elements of array
*
* Return: always 0 (Success)
*/
void reverse_array(int *a, int n)
{
int i, temp, e;

i = 0;
e = n - 1;
while (i < e)
{
temp = a[i];
a[i] = a[e];
a[e] = temp;
i++;
e--;
}
}
