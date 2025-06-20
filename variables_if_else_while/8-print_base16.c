#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char hexadecimal = '0';
do {
putchar(hexadecimal);
hexadecimal++;
} while (hexadecimal <= '9');
hexadecimal = 'a';
do {
putchar(hexadecimal);
hexadecimal++;
} while (hexadecimal <= 'f');
putchar('\n');
return (0);
}
