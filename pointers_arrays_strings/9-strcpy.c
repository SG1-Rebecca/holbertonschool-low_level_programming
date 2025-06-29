#include "main.h"
/**
* _strcpy - copy the string pointed by src
* @src: source of the string
* @dest: destination of the buffer
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int copy = 0;
while (src[copy] != '\0')
{
dest[copy] = src[copy];
copy++;
}
dest[copy] = '\0';
return (dest);
}
