#include "main.h"
/**
* swap_int - function that swap the value of two int
* @a: pointer to the first int
* @b: pointer to the second int
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
