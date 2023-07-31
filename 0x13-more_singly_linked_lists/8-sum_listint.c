#include "lists.h"
#include <stdio.h>
/**
* sum_listint - function that sums all elements of a list
*
* @head: point to the head of the list
*
* Return: sum of all elements
*/
int sum_listint(listint_t *head)
{
int sums;

for (sums = 0; head; sums += head->n, head = head->next)
;
return (sums);
}
