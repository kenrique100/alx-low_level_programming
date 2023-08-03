#include "main.h"
#include <stdio.h>
/**
* set_bit - function that gets the value of int at index
*
* @n: pointer to number
* @index: index to change
*
* Return: 1 on success, -1 on failure
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
