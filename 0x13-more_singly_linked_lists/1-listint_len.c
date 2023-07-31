#include "lists.h"
#include <stdio.h>
/**
* listint_len - function that gets the number of nodes in a list
*
* @h: list to print
*
* Return: number of nodes in the list
*/
size_t listint_len(const listint_t *h)
{
size_t count;

for (count = 0; h; count++)
h = h->next;
return (count);
}
