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
 int length, i;
if (str == NULL)
{
return (NULL);
}
for (length = 0; str[length] != '\0'; length++)
{
}
new_str = malloc((length + 1) * sizeof(char));
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; i <= length; i++)
{
new_str[i] = str[i];
}
return (new_str);
}
