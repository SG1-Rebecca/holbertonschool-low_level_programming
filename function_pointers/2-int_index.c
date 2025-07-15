#include "function_pointers.h"
/*************/
int int_index(int *array, int size, int (*cmp)(int))
{
  int i;
  for (i = 0; i < size; i++)
    {
      if (size <= 0)
	{
	  return (-1);
	}
      cmp(array[i]);
    }
  return (0);
}
