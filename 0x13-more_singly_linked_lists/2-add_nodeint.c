#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>
/**
* add_nodeint - function that adds new nodes to the list
*
* @head: current location in the list
* @n: integer params
*
* Return: pointer to current position in list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;

temp = *head;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = *head;
*head = temp;
return (*head);
}
