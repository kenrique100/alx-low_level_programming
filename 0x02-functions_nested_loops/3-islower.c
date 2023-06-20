#include "main.h"
/**
* _islower - function to check for lowercase character
*
* @c: the character  to be checked and printed
*
* Return: 1 for lowercase. otherwise 0 if false
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
