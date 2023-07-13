#include <stdlib.h>
#include "main.h"
/**
* _realloc - function that reallocates a memory block
*
* @ptr: pointer to the original memory
* @old_size: old size of memory
* @new_size: new size of memory
*
* Return: pointer to reallocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p, *sptr;
unsigned int i;

if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
if (new_size > old_size)
{
p = malloc(new_size * sizeof(char));
sptr = ptr;
for (i = 0; i < old_size; i++)
p[i] = sptr[i];
free(ptr);
return (p);
}
return (ptr);
}
