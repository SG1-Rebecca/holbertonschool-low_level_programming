#include "dog.h"
#include <stddef.h>
/**
* init_dog - initialize a variable of type struct dog
* @d: pointer to the dog structure to be initialized
* @name: name of the dog
* @age: age of the dog
* @owner: name of the dog's owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
