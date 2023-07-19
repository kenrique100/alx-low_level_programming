#include "function_pointers.h"

/**
* print_name - function to print a name
*
* @name: string input
* @f: pointer to a function casted to char
*
* Return: nothing
*/
void print_name(char *name, void(*f)(char *))
{
if (name == NULL || f == NULL)
return;
(*f)(name);
}
