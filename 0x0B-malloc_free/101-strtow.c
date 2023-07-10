#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* word_count - function to counts words the number of words in a string
*
* @str: string to evaluate
* @pos: position of the word to count characters
* @headchar: position of the first letter of the word
*
* if pos = 0, count the number of chars in the word
* else count number of words
*
* Return: word_count if pos == 0,
* length of word if pos > 0,
* position of word if pos > 0 && firstchar > 0
*/

int word_count(char *str, int pos, char headchar)
{
int i, wordcount, count, flag;

str[0] != ' ' ? (wordcount = 1) : (wordcount = 0);
for (i = 0, flag = 0; str[i]; i++)
{
if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && flag == 0)
{
wordcount++;
flag = 1;
}
if (pos > 0 && pos == wordcount)
{
if (pos > 0 && pos == wordcount && headchar > 0)
return (i);
for (count = 0; str[i + count + 1] != ' '; count++)
;
return (count);
}
if (str[i] == ' ')
flag = 0;
}
return (wordcount);
}
/**
* strtow - splits a string into a 2-D array of words
*
* @str: string to split
*
* Return: pointer to a 2-D array of strings (Success)
* or NULL (Error)
*/
char **strtow(char *str)
{
int wc, wordlen, getheadchar, len, i, j;
char **p;

for (len = 0; str[len]; len++)
;
if (str == NULL)
return (NULL);
wc = word_count(str, 0, 0);
if (len == 0 || wc == 0)
return (NULL);
p = malloc((wc + 1) * sizeof(void *));
if (p == NULL)
return (NULL);
for (i = 0, wordlen = 0; i < wc; i++)
{
/* Allocate memory for nested elements */
wordlen = word_count(str, i + 1, 0);
if (i == 0 && str[i] != ' ')
wordlen++;
p[i] = malloc(wordlen *sizeof(char) + 1);
if (p[i] == NULL)
{
for ( ; i >= 0; --i)
free(p[i]);
free(p);
return (NULL);
}
/* initialize each element of the nested array with the word*/
getheadchar = word_count(str, i + 1, 1);
if (str[0] != ' ' && i > 0)
getheadchar++;
else if (str[0] == ' ')
getheadchar++;
for (j = 0; j < wordlen; j++)
p[i][j] = str[getheadchar + j];
p[i][j] = '\0';
}
p[i] = NULL;
return (p);
}
