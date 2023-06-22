#include "main.h"
/**
* print_line - function that draw a straight line
* on the terminal
*
* @n: number of times the lines should be printed
*
* Return: If n is 0 or less, the function should only print \n
*/
void print_line(int n)
{

if (n <= 0)
{
_putchar('\n');
}
else
{
int i;

for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
