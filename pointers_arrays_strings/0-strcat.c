#include "main.h"
/**
* _strcat - concatenate two strings
* @dest: the dest string
* @src: the string to be appended
* Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
