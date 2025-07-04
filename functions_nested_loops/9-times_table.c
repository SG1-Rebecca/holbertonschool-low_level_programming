#include "main.h"

void times_table(void)
{
int loop;
int cols;
int table_time = 9;
int res;

for (loop = 0; loop < 10; loop++)
{
	for (cols = 0; cols < 10; cols++)
	{
	res = loop * table_time;
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
