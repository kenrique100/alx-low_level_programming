#include "lists.h"
#include <stdlib.h>

/**
* free_listint - delete function
*
* @head: describe argument
*
* Return: nothing
*/
void free_listint(listint_t *head)
{
if (head == NULL)
return;
free_listint(head->next);
free(head);
}
