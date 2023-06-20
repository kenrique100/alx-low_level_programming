#include "main.h"
/**
* jack_bauer - prints the 24h clock countdown
* from 00:00 to 23:59
*
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
int i, j, k, h;

for (i = 0; i <= 2; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 5; k++)
{
for (h = 0; h <= 9; h++)
{
if (i >= 2 && j >= 4)
{
return;
}
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(h + '0');
_putchar('\n');
}
}
}
}
}