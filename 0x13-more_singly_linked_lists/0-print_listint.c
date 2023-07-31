#include "lists.h"
#include <stdio.h>

/**
* print_listint - function that prints all elements of a list
*
* @h: list to print
*
* Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
size_t count;

for (count = 0; h; count++)
{
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
