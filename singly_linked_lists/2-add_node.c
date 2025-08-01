#include "lists.h"
#include <stddef.h>
#include <string.h>
/**
 * add_node - 
 * @head:
 * @str: string to be duplicated
 * 
 * Return: 
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *duplicated_str;

    if (head == NULL || str == NULL)
    {
        return (NULL);
    }
    duplicated_str = strdup(str);
    if (duplicated_str == NULL)
    {
        return (NULL);
    }
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        free (duplicated_str);
        return (NULL);
    }
    
    
 return (new_node);   
}