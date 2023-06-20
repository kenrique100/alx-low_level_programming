#include "main.h"
/**
* print_last_digit - function to print the last
* digit of a number
*
* @n: parameter to be input as integer
*
* Return: number last digit
*/
int print_last_digit(int n)
{
int x;
x = n % 10;
if (x < 0)
{
_putchar(-x + '0');
return (-x);
}
else
{
_putchar(x + '0');
return (x);
}
_putchar('\n');
}
