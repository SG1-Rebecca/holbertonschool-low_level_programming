#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the lists
 */
size_t list_len(const list_t *h)
{
size_t nodes = 0;
const list_t *head;
for (head = h; head != NULL; head = head->next)
{
nodes++;
}
return (nodes);
}
