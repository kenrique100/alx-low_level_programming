#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* string_nconcat - function that concatenates two strings
*
* @s1: string 1
* @s2: string 2
*
* @n: number of bytes
*
* Return: new string or NULL as empty string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int p1, p2, i, j;
char *str;

/*treat NULL as empty string*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

p1 = p2 = 0;
/*length of both s1 & s2 respectively*/
while (s1[p1] != '\0')
p1++;
while (s2[p2] != '\0')
p2++;

/*set n to length of s2*/
if (n >= p2)
n = p2;

str = (char *) malloc((p1 + n + 1) * sizeof(char));
if (str == NULL)
return (NULL);

/*add s1 to str*/
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
/*add s2 n bytes to str*/
for (j = 0; j < n && s2[j] != '\0'; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0';
return (str);
}
