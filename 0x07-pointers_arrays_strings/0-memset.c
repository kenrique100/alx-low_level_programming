#include "main.h"
/**
* _memset - a function that fill memory
* with a constant byte
*
* @s: input memory to char type
* @b: input variable of char type represents the character to fill
* @n: number of bytes to be filled
*
* Return: a pointer with values in bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0 ; i++)
{
s[i] = b;
n--;
}
return (s);
}
