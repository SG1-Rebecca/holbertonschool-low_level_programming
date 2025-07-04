#include "main.h"
/**
* times_table - print the 9 times table
*
*/
void times_table(void)
{
int loop;
int cols;
int res;

for (loop = 0; loop < 10; loop++)
{
	for (cols = 0; cols < 10; cols++)
	{
	res = loop * cols;
	if (cols != 0)
	{
	_putchar(',');
	_putchar(' ');
	}
	if (res < 10)
	{
	_putchar(' ');
	_putchar('0' + res);
	}
	else
	{
	_putchar('0' + res / 10);
	_putchar('0' + res % 10);
	}
	}
_putchar('\n');
}
}
