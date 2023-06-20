#include "main.h"
/**
*_abs - function that computes the absolute
*value of an integer
*
* @n: parameter to check
*
* Return: the absolute value of integer n
**/
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * -1);
}
_putchar('\n');
}
