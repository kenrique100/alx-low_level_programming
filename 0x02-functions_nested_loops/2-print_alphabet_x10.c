#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10times
* Description: In a new line
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char i;
int j;

for (i = 1; i <= 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
