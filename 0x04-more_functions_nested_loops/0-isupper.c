#include "main.h"
/**
* _isupper - function that checks for uppercase character
*
* @c: character to be checked
*
* Return:: 1 if character is uppercase,
* otherwise 0
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else if (c >= 'a' && c <= 'z')
return (0);
}
