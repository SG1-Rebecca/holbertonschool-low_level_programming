#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* malloc_checked - allocate memory using malloc
* @b: number of bytes to allocate
*
* Return: pointer to the allocated memory
* If malloc fails, the program exits with status 98
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
