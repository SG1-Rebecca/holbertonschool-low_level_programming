#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
int index;
for (index = 0; str[index] != '\0'; index++)
{
if (str[index] >= 'a' && str[index] <= 'z')
{
/* convert to uppercase */
str[index] = str[index] - 32;
}
}
return (str);
}

