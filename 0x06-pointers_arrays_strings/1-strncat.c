#include "main.h"
/**
* _strncat - a function that concatenate two strings using a most
* n bytes from src
*
* @dest: input parameter
*
* @src: input parameter
*
* @n: input parameter for number of bytes
*
* Return: dest (Success)
**/
char *_strncat(char *dest, char *src, int n)
{
int ch;
int i;

ch = 0;
while (dest[ch] != '\0')
{
ch++;
}
i = 0;
while (i < n && src[i] != '\0')
{
dest[ch] = src[i];
ch++;
i++;
}
dest[ch] = '\0';
return (dest);
}
