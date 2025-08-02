#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to be duplicated
 *
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *duplicated_str;
unsigned int length;
if (head == NULL || str == NULL)
{
return (NULL);
}
for (length = 0; str[length] != '\0'; length++)
{
}
/*Duplicating string and check if it not NULL*/
duplicated_str = strdup(str);
if (duplicated_str == NULL)
{
return (NULL);
}
/*allocating new_node and check if enough memory*/
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(duplicated_str);
return (NULL);
}
/*Creating new node*/
new_node->str = duplicated_str;
new_node->len = length;
new_node->next = *head;
/*updating the head to point to the new node*/
*head = new_node;
return (new_node);
}
