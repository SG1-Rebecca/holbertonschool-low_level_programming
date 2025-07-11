#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* string_nconcat - concatenate two strings
* @s1: the first string
* @s2: the second string
* @n: number of bytes to allocates
*
* Return: pointer to a newly allocated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int i, j, length_s1, length_s2;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (length_s1 = 0; s1[length_s1] != '\0'; length_s1++)
{
}
for (length_s2 = 0; s2[length_s2] != '\0'; length_s2++)
{
}
if (n >= length_s2)
{
n = length_s2;
}
new_str = malloc(sizeof(char) * (length_s1 + n + 1));
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; i < length_s1; i++)
{
new_str[i] = s1[i];
}
for (j = 0; j < n; j++)
{
new_str[length_s1 + j] = s2[j];
}
new_str[length_s1 + j] = '\0';
return (new_str);
}
