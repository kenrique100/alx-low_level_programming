#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* pop_listint - function that pops off the head of the list
* and returns its contents
*
* @head: top of the list
*
* Return: Always 0 success contents of the list
*/
int pop_listint(listint_t **head)
{
int j;
listint_t *count, *temp;

if (head == NULL)
return (0);
temp = count = *head;
if (*head)
{
j = count->n;
*head = count->next;
free(temp);
}
else
j = 0;
return (j);
}
