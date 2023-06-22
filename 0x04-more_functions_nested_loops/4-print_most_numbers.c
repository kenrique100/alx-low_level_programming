#include "main.h"
/**
* print_most_numbers - function that prints int from 0 -9
* except 2 and 4 followed by a newline
*
* Return: Always 0 (success)
*/
void print_most_numbers(void)
{
int n;

for (n = 0; n < 10; n++)
{
if (n != 2 && n != 4)
{
_putchar(n + 48);
}
}
}
