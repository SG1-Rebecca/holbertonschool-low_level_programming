#include "main.h" 
/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer value, or 0 if no numbers are found
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int digit_found = 0;

    while (*s != '\0')
    {
        if (*s == '-')
        {
           
            sign *= -1;
        }
        else if (*s == '+')
        {
        }
        else if (*s >= '0' && *s <= '9')
        {
            digit_found = 1;
            result = result * 10 + (*s - '0');
        }
        else if (digit_found)
        {
            break;
        }

        s++;
    }
    return (result * sign);
}
