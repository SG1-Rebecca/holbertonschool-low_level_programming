#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char reverse_alphabet;
reverse_alphabet = 'z';
while (reverse_alphabet >= 'a')
{
putchar(reverse_alphabet);
reverse_alphabet--;
}
putchar('\n');
return (0);
}

