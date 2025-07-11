#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
*@s1: first string
*@s2: second string
*
* Return: pointer to concatenated string or NULL on faillure
***/
char *str_concat(char *s1, char *s2)
{
int i, j, length_s1, length_s2;
char *concat;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (length_s1 = 0; s1[length_s1]; length_s1++)
{
}
for (length_s2 = 0; s2[length_s2]; length_s2++)
{
}
concat = malloc(sizeof(char) * (length_s1 + length_s2 + 1));
if (concat == NULL)
{
return (NULL);
}
for (i = 0; i < length_s1; i++)
{
concat[i] = s1[i];
}
for (j = 0; j < length_s2; j++)
{
concat[i + j] = s2[j];
}
concat [i + j] = '\0';
return (concat);
}
