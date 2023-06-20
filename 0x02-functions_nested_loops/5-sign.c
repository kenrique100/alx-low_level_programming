#include "main.h"
/**
* print_sign - checks if an input number is
* greater than, equal to or less than zero and
* prints the sign
*
* @n: parameter to be checked
*
* Return: 1 for if parameter is greater than 0
* 0 if parameter is equal to zero
* -1 if parameter is less than zero
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
