#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - function that prints the dog age and owner
*
* @d: pointer to the dog struct
*
* Returns: null if not found and success(name,age,owner)
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
d->name == NULL ? (printf("Name: (nil)\n")) : (printf("Name: %s\n", d->name));
printf("Age: %f\n", d->age);
d->owner == NULL ? (printf("Owner: (nil)\n")) : (printf("Owner: %s\n", d->owner));
}
}
