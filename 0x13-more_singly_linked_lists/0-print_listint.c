#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a linked list
 * @h: linked list of type print_listint_t to print
 *
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 1;

	if (h == NULL)

		return (0);


	while (h->next != NULL)
	
	{
	
		printf("%d\n", h->n);

		h = h->next;

		nodes++;
	}

	printf("%d\n", h->n);

	return (nodes);       
}
