#include "main.h"
/**
* _strcmp - compare two strings
* @s1: first string to compare
* @s2: second string to compare
*
* Return: an int indicating the result of the comparison
*/
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
break;
}
return (s1[i] - s2[i]);
}
