#include "function_pointers.h"
/**
* int_index - search for an integer
* @array: pointer to the array of integer
* @size: the number of elements in the array
* @cmp: pointer to the function used to compare values
*
* Return: the index of the first element
* for which the cmp function doesn't return 0,
* -1 if no element matches,
* -1 if array == NULL or cmp == NULL or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
