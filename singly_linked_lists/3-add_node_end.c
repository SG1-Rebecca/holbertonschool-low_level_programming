#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to be duplicated
 *
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *end;
char *duplicated_str;
unsigned int length;
if (head == NULL || str == NULL)
{
return (NULL);
}
for (length = 0; str[length] != '\0'; length++)
{
}
duplicated_str = strdup(str);
if (duplicated_str == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(duplicated_str);
return (NULL);
}
new_node->str = duplicated_str;
new_node->len = length;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
for (end = *head; end->next != NULL; end = end->next)
{
}
end->next = new_node;
return (new_node);
}
