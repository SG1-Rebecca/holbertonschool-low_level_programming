#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: min values
 * @max: max values
 * 
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
    int *ptr, array_index, size;
    if (min > max)
    {
        return (NULL);
    }
    size = max - min + 1;
    ptr = malloc( size * sizeof(int));
    if (ptr == NULL)
    {
        return(NULL);
    }
    /* Fill the array of int from min to max values*/
    for (array_index = 0; array_index < size; array_index++)
    {
        ptr[array_index] = min + array_index;
    }
    return(ptr);
}