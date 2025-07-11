#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* malloc_checked - allocate memory using malloc
* @b:
*
* Return: pointer with status value of 98 if malloc fail
*****/
void *malloc_checked(unsigned int b)
{
  void *ptr;
  ptr = malloc(b);
    if (ptr == NULL)
      {
	exit(98);
      }
    return ptr;
}
