#include "main.h"
/**
* more_numbers - prints numbers for 0 to 14
*
*
**/
void more_numbers(void)
{
int repeat;
for (repeat = 0; repeat < 10; repeat++)
{
int more_nb;
for (more_nb = 0; more_nb <= 14; more_nb++)
{
if (more_nb >= 10)
_putchar((more_nb / 10) + '0');
_putchar((more_nb % 10) + '0');
}
_putchar('\n');
}
}
