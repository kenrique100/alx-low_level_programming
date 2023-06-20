#include "main.h"
/**
* _islower - function to check for lowercase character
*
* @c: the character in ASCII code to be checked and printed
*
* Return: 1 for lowercase. otherwise 0 if false
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
