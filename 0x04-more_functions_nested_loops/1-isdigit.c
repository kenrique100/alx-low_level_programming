#include "main.h"
/**
* _isdigit - function that checks if numbers are of 0 - 9
*
* @c: char to be checked
*
* Return:: 1 if character is uppercase,
* otherwise 0
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
