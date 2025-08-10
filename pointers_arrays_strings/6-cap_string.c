#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: Pointer to the string
 * 
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int index; 
/*Capitalize first character if it's a lowercase*/
if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] -= 32;
}    
for (index = 0; str[index] != '\0'; index++)
{
/*check for separators of words*/
if (str[index] == '\t' || str[index] == '\n' || str[index] == ' ' ||
str[index] == ',' || str[index] == ';' || str[index] == '.' ||
str[index] == '!' || str[index] == '?' || str[index] == '"' ||
str[index] == '(' || str[index] == ')' || str[index] == '{' || 
str[index] == '}')
{
/* check if next character is lowercase */
if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
{
str[index + 1] -= 32;
}
}    
}
return (str);
}
