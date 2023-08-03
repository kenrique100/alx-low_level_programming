#include <stdio.h>
#include "main.h"

/**
* binary_to_uint- function that convert binary to unsigned int
*
* @b: binary params
*
* Return: unsigned int(Success)
*/

unsigned int binary_to_uint(const char *b)
{

int night = 0, i;
unsigned int result = 0, non_binary = 0;

if (b == NULL)
{
return (non_binary);
}
while (b[night] != '\0')
night++;
night -= 1;
i = 0;
while (b[i])
{
if ((b[i] != '0') && (b[i] != '1'))
{
return (non_binary);
}
if (b[i] == '1')
result += (1 * (1 << night));

i++;

night--;
}
return (result);
}
