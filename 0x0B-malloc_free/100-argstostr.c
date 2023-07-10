#include <stdlib.h>
#include "main.h"
/**
* argstostr - function that prints args of program.
*
* @ac: argument count
* @av: pointer to arg vectors
*
* Return: pointer to new args as 1 string.
*/
char *argstostr(int ac, char **av)
{
int i, j, len, count;
char *p;

if (ac == 0)
{
return (NULL);
}
if (av == NULL)
{
return (NULL);
}

i = j = len = count = 0;
for (i = 0; av[i]; i++)
{
for (j = 0; av[i][j]; j++)
len++;
}
p = (char *)malloc(len *sizeof(char) + ac + 1);
if (p == NULL)
return (NULL);
for (i = 0; av[i]; i++)
{
for (j = 0; av[i][j]; j++, count++)
p[count] = av[i][j];
p[count] = '\n';
count++;
}
p[count] = '\0';
return (p);
}
