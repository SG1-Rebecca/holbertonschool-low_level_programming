#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current;
size_t length = 0;
for (current = h; current != NULL; current = current->next)
{
length++;
}
return (length);
}
