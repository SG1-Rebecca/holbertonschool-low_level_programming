#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/*
* print_list - prints the elements of a list
* @h: pointer to the head of the list
*
* Return: number of nodes or [0] (nil) if str is NULL 
*/
size_t print_list(const list_t *h)
{
    size_t nodes = 0;
    const list_t *head;
    for (head = h; head != NULL; head = head->next)
    {
        if (head->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%u] %s\n", head->len, head->str);
        }
        
        nodes++;
    }   
    return (nodes);
}