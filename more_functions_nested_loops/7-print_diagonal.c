#include "main.h"
/**
* print_diagonal - draws a diagonal line
*@n: number to print \
*
* Return: print \n if n is 0 or less
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int diag_line, space;
for (diag_line = 0; diag_line < n; diag_line++)
{
for (space = 0; space < diag_line; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
