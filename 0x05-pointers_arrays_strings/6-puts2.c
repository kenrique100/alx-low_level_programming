#include "main.h"
/**
* puts2 - functions that prints every character of a string
*
* @str: parameter for string
*
* Return: always 0
*/
void puts2(char *str)
{
int i;

for (i = 0; str[i]; != '\0'; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
