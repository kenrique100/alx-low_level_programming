#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* delete_nodeint_at_index - funstion that delete a node at index
*
* @head: top of the list
* @index: location of the node to delete
*
* Return: pointer to head of list
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int j;
listint_t *count, *sequent;

if (!head || !*head)
return (-1);
count = *head;
if (index == 0)
{
*head = (*head)->next;
free(count);
return (1);
}
for (j = 0; j < (index - 1); j++)
{
count = count->next;
if (count == NULL)
return (-1);
}
sequent = count->next;
count->next = sequent->next;
free(sequent);
return (1);
}
