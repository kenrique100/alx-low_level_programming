#include "main.h"
/**
* print_rev - function to print a string in reverse
*
* @s: Spring parameter
*
* Return: always 0 (success)
*/
void print_rev(char *s)
{
int temp = 0;
int i;
while (*s != '\0')
{
temp++;
s++;
}
s--;
for (i = temp; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
