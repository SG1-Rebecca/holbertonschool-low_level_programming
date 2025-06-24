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
_putchar('\n');
else
{
int diag_line;
for (diag_line = 0; diag_line < n; diag_line++)
{
int space;
for (space = 0; space < n; space++)
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
