#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listp - function that frees a linked list
*
* @head: head of a list.
*
* Return: nothing
*/

void free_listp(listp_t **head)
{
listp_t *temp;
listp_t *count;

if (head != NULL)
{
count = *head;
while ((temp = count) != NULL)
{
count = count->next;
free(temp);
}
*head = NULL;
}
}

/**
* print_listint_safe - function that prints a linked list.
*
* @head: head of a list.
*
* Return: number of nodes in the list (numb_nodes)
*/
size_t print_listint_safe(const listint_t *head)
{
size_t numb_nodes = 0;
listp_t *head_ptr, *new, *sum;

head_ptr = NULL;
while (head != NULL)
{
new = malloc(sizeof(listp_t));

if (new == NULL)
exit(98);
new->p = (void *)head;
new->next = head_ptr;
head_ptr = new;

sum = head_ptr;

while (sum->next != NULL)
{
sum = sum->next;
if (head == sum->p)
{
printf("-> [%p] %d\n", (void *)head, head->n);
free_listp(&head_ptr);
return (numb_nodes);
}
}

printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
numb_nodes++;
}

free_listp(&head_ptr);
return (numb_nodes);
