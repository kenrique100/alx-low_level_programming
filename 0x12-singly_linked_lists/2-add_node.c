#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strlen - function gets length of the string
*
* @s: string params
*
* Return: length of the string success
*/
int _strlen(const char *s)
{
int i;

for (i = 0; s[i]; i++)
;
return (i);
}
/**
* add_node - function adds new nodes to the list
*
* @head: position in list
* @str: string to add to the head
*
* Return: pointer to current position in list(Success)
*/
list_t *add_node(list_t **head, const char *str)
{
int i, len;
char *s;
list_t *new;

if (str == NULL || head == NULL)
return (NULL);
len = _strlen(str);
new = *head;
s = malloc((len + 1) * sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; str[i]; i++)
s[i] = str[i];
new = malloc(sizeof(list_t));
if (new == NULL)
{
free(s);
return (NULL);
}
new->str = s;
new->len = len;
new->next = *head;
*head = new;
return (new);
}
