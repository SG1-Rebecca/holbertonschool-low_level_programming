#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int numb_comb;
for (numb_comb = 0; numb_comb <= 9; numb_comb++)
{
putchar(numb_comb + '0');
if (numb_comb != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
