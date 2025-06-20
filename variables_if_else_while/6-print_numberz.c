#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int numberz;
numberz = 0;
while (numberz <= 9)
{
putchar(numberz + '0');
numberz++;
}
putchar('\n');
return (0);
}
