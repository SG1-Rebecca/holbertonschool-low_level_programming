#include "main.h"
/**
* _isdigit - check for a digit character
* @c: digit to check
*
* Return: 1 if c a digit, 0 otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
