#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* get_nodeint_at_index - function that gets the n node of the list
*
* @head: top of the list
* @index: pointed node
*
* Return: pointer to the n node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int k;

k = 0;
while (k < index)
{
if (head->next == NULL)
return (NULL);
head = head->next;
k++;
}
return (head);
}
