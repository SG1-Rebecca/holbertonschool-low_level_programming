#include "main.h"
/**
 * leet - encode string into 1337
 * @str: Pointer to the string
 *
 * Return: Pointer to the new stringS
 */
char *leet(char *str)
{
int index, letter_index;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
for (index = 0; str[index] != '\0'; index++)
{
for (letter_index = 0; letters[letter_index] != '\0'; letter_index++)
{
if (str[index] == letters[letter_index])
{
str[index] = numbers[letter_index];
break;
}
}
}
return (str);
}
