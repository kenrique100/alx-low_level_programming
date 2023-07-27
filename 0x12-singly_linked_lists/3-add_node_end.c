#include "lists.h"
#include <stddef.h>

/**
* _strlen - function gets length of the string
*
* @s: string
*
* Return: length of the string
*/
int _strlen(const char *s)
{
int j;

for (j = 0; s[j]; j++)
;
return (j);
}
/**
* _strdup - function that recreates a string duplicate function
*
* @src: source of string to duplicate
*
* Return: pointer to malloc space with copied string
*/
void *_strdup(const char *src)
{
int len, i;
char *count;

len = _strlen(src);
count = malloc((len + 1) * sizeof(char));
if (count == NULL)
return (NULL);
for (i = 0; src[i]; i++)
count[i] = src[i];
count[i] = '\0';
return (count);
}
/**
* add_node_end - function that adds new nodes to the end of the list
*
* @head: current place in the list
* @str: string to add to the head
*
* Return: points to current position in list
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *current;
char *d_str;

if (str == NULL)
return (NULL);
d_str = _strdup(str);
if (d_str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = d_str;
new->len = _strlen(str);
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (*head);
}
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
return (*head);
}
