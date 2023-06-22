#include "main.h"
/**
* print_more_numbers - function to print 10 times the numbers from 0 - 14
* followed bya new line
*
* Return: Always 0 (success)
*/
void more_numbers(void)
{
int i, j;

for (i = 1 ; i <= 10 ; i++)
{
for (j = 0 ; j <= 14 ; j++)
{
if (j >= 10)
_putchar(i / 10 + '0');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
