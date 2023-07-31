#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* insert_nodeint_at_index - function that insert a node at index
*
* @head: top of the list
* @index: location to insert node
* @n: value of the inserted node
*
* Return: pointer to head of list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
listint_t *temp, *count;

temp = *head;
count = malloc(sizeof(listint_t));
if (count == NULL)
return (NULL);
count->n = n;
if (index == 0)
{
count->next = temp;
*head = count;
return (*head);
}
while (index > 1)
{
temp = temp->next;
index--;
if (!temp)
{
free(count);
return (NULL);
}
}
count->next = temp->next;
temp->next = count;
return (count);
}
