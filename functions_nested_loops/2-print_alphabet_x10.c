#include "main.h"
/**
* print_alphabet_x10 - print alphabet x10
*
* Return: void
*/
void print_alphabet_x10(void)
{
int loop_ten_times;
char alphabet;
for (loop_ten_times = 0; loop_ten_times < 10; loop_ten_times++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
