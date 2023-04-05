#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: A pointerto the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *free_size;

	while ((free_size = head) != NULL)
	{
		head = head->next;
		free(free_size);
	}
}
}
