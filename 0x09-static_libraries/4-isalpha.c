#include "main.h"
/**
* _isalpha - function that checks for alphabets
*
* @c: parameter to be checked
*
* Return: 1 if it's an alphabet,
* 0 otherwise if it's not an alphabet
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
