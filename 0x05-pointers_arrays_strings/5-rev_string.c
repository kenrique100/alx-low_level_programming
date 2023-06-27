#include "main.h"
/**
* rev_string - function reverse a string
*
* @s: input parameter fot string
*
* Return: string in reverse
*/
void rev_string(char *s)
{
int i, length;
char c;
for (length = 0; s[length] != '\0'; length++)
for (i = 0; i < length / 2; i++)
{
c = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = c;
}
}
