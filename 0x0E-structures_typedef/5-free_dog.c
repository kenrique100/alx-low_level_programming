#include <stdlib.h>
#include "dog.h"

/**
* free_dog - function to free any memory allocated by dog
*
* @d: pointer to free
*
* Return: nothing
*/

void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);
free(d);
}
}
