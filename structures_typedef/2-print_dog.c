#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_dog - print info about a dog
* @d: pointer to the dog structure
*
* Return: elements of a dog or (nil) if an element of d is NULL,
* nothing if d is NULL
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("Name: (nil)");
}
else
{
printf("Name: %s\n", d->name);
}
if (d->age == 0.0)
{
printf("Age: (nil)");
}
else
{
printf("Age: %f\n", d->age);
}
if (d->owner == NULL)
{
printf("Owner: (nil)");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
