#include "main.h"
/**
* puts2 - print every other character of a string,
*         starting with the first character, followed by a new line
* @str: the string to print
*/
void puts2(char *str)
{
int even = 0;
while (str[even] != '\0')
{
if (even % 2 == 0)
{
_putchar(str[even]);
}
even++;
}
_putchar('\n');
}
