#include "main.h"
/**
* reverse_array - reverse the content of an array of integers
* @a: Pointer to the array of integer
* @n: Number of elements in the array
*
* Return: Nothing
*/
void reverse_array(int *a, int n)
{
int start, tmp, end;
end = n - 1;
for (start = 0; start < end; start++)
{
tmp = a[start];
a[start] = a[end];
a[end] = tmp;
/* decrement end after swapping */
end--;
}
}