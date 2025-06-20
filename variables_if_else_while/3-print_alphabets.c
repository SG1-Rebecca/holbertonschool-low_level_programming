#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

char lowercase_alphabet;
char uppercase_alphabet;

for (lowercase_alphabet = 'a'; lowercase_alphabet <= 'z'; lowercase_alphabet++)
putchar(lowercase_alphabet);
for (uppercase_alphabet = 'A'; uppercase_alphabet <= 'Z'; uppercase_alphabet++)
putchar(uppercase_alphabet);
putchar('\n');
return (0);
}
