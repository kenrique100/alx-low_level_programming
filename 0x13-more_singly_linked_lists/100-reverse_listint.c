
#include<stdlib.h>
#include "lists.h"
/**
* reverse_listint - function to reverse a list
*
* @head: describse argument
* Return: reverse list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *temp, *count;

temp = NULL;
count = NULL;

while (*head != NULL)
{
count = (*head)->next;
(*head)->next = temp;
temp = *head;
*head = count;
}

*head = temp;
return (*head);
}
