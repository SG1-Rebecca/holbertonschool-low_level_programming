#include "main.h"
/**
* print_square - print a square
*@size: size of the square
*
* Return: new line if size is 0 or less
*/
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int rows, cols;
for (rows = 0; rows < size; rows++)
{
for (cols = 0; cols < size; cols++)
_putchar('#');
_putchar('\n');
}
}
}
