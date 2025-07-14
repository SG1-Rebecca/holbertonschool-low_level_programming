#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - execute a function on each element of an array
* @array: pointer to the array
* @size: size of the array
* @action: pointer to the function
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
