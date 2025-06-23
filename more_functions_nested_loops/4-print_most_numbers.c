#include "main.h"
/**
* print_most_numbers - prints the numbers
*
*
*/
void print_most_numbers(void)
{
int most_nb;
for (most_nb = 0; most_nb <= 9; most_nb++)
{
if (most_nb != 2 && most_nb != 4)
_putchar(most_nb + '0');
}
_putchar('\n');
}
