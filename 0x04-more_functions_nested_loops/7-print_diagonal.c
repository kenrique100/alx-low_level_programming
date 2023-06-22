#include "main.h"
/**
* print_diagonal - function that draws a diagonal line on the terminal
*
* @n: number of times / should be printed
*
* Return: If n is 0 or less, the function should only print a \n
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == 1)
_putchar('\\');
else if (j < 1)
_putchar(' ');
}
_putchar('\n');
}
}
}
