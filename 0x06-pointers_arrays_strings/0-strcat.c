#include "main.h"
/**
* _strcat - a function that concatenates two strings
*
* @dest: input parameter
*
* @src: input parameter
*
* Return: always 0 (success)
*/
char *_strcat(char *dest, char *src)
{
int s1;
int s2;

s1 = 0;
while (dest[s1])
{
s1++;
for (s2 = 0; src[s2]; s2++)
dest[s1++] = src[s2];
}
return (dest);
}
