#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array of nmemb elements of size bytes
* @nmemb: number of elements
* @size: size of each elements in bytes
*
* Return: Pointer to the allocated memory or NULL if failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i, total_size;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < total_size; i++)
{
ptr[i] = 0;
}
return (ptr);
}
