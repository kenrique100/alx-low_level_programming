#include "main.h"
#include <bits/posix1_lim.h>
/**
* print_square - function to print squares
* followed by a new line
*
* @size: parameter for size of square
*
* Return:  Always 0 Success
*/
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
