#include "main.h"
/**
* _strncpy - copies a string
* @dest: dest where string will be copied
* @src: source string
* @n: number to be copied
* Return: pointer to dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
