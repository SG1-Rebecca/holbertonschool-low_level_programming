#include "main.h"
/**
* jack_bauer - print every minute from 00:00 to 23:59
*
*
*/
void jack_bauer(void)
{
int hours;
int minutes;
for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
_putchar('0' + hours / 10);
_putchar('0' + hours % 10);
_putchar(':');
_putchar('0' + minutes / 10);
_putchar('0' + minutes % 10);
_putchar('\n');
}
}
}
