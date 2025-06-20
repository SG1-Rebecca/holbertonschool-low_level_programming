#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet_soup;
for (alphabet_soup = 'a'; alphabet_soup <= 'z'; alphabet_soup++)
{
if (alphabet_soup != 'q' && alphabet_soup != 'e')
{
putchar(alphabet_soup);
}
}
putchar('\n');
return (0);
}
