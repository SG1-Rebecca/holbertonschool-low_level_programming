#include "main.h"
/**
* rev_string - reverse a string
* @s: the string to reverse
*/
void rev_string(char *s)
{
int start = 0;
int end = 0;
char temp;
while (s[end] != '\0')
{
end++;
}
end--;
while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
