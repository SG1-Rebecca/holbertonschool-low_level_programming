#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * 
 * 
 * 
 */
size_t list_len(const list_t *h)
{
size_t nodes = 0;
const list_t *head;
for (head = h; head != NULL; head = head->next)
{
if (head->str == NULL)
{
return(1);
}
else
{
printf("[%u]\n", head->len);
}
nodes++;
}
return(nodes);
}