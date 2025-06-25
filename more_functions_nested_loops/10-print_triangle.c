#include "main.h"
/**
* print_triangle - prints a triangle
*@size: size of the triangle
*
* Return: new line if size is 0 or less
**/
void print_triangle(int size)
{
int rows, triangle, spaces;
if (size <= 0)
{
_putchar('\n');
}
for (rows = 1; rows <= size; rows++)
{
for (spaces = size - rows; spaces > 0; spaces--)
{
_putchar(' ');
}
for (triangle = 1; triangle <= rows; triangle++)
{
_putchar('#');
}
_putchar('\n');
}
}
