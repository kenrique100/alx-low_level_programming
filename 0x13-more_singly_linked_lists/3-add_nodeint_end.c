#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* add_nodeint_end - function that adds new nodes to the end of the list
*
* @head: current location in the list
* @n: integer params
*
* Return: points to current position in list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *current;

temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = NULL;

if (*head == NULL)
{
*head = temp;
return (*head);
}
current = *head;
while (current->next != NULL)
current = current->next;
current->next = temp;
return (*head);
}
