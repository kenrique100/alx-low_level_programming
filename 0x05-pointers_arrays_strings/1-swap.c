#include "main.h"
/**
* swap_int - reads 2 integers and swap
*
* @a: read parameter
*
* @b: read parameter
*
* Return: always o
*/
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
