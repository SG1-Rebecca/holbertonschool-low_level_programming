#include "main.h"
/**
* puts_half - print second half of a string
* @str: string to print
*/
void puts_half(char *str)
{
int length, n, half;
for (length = 0; str[length] != '\0'; length++)
{

}
if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = (length - 1) / 2 + 1;
}
for (half = n; half < length; half++)
{
_putchar(str[half]);
}
_putchar('\n');
}
