#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* strdup - return a pointer to a new string
* @str: the string to duplicate
*
* Return: pointer to the duplicated string,
or NULL if insufficient memory or str is NULL
*/
char *_strdup(char *str)
{
char *new_str;
if (str == NULL)
{
return (NULL);
}
new_str = malloc(strlen(str) + 1);
if (new_str == NULL)
{
return (NULL);
}
strcpy(new_str, str);
return (new_str);
}
