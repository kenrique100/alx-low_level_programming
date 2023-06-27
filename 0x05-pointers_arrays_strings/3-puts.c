#include "main.h"
/**
* _puts - Function that prints a string followed
* by a new line to stdout
*
* @str: string to sprint
*
* Return: always 0 (success)
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
}
