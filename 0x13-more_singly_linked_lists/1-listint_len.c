#include "lists.h"
/***/
size_t listint_len(const listint_t *h)
{
	int count = 0;
	
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
