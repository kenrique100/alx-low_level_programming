#include "function_pointers.h"

/**
* array_iterator - a function that executes a function
* on each element of an array
*
* @array: input array
* @size: size of array
* @action: pointer to the function
*
* Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array != NULL && size > 0 && action != NULL)
for (i = 0; i < size; i++)
action(array[i]);
}
