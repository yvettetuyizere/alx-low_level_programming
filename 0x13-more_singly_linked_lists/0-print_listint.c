#include "lists.h"
/**
 * print_listint - prints all elements of a linked list
 * @h: linked list of type print_listint_t to print
 *
 * Return: node
 */
size_t print_listint(const listint_t *h)
{
	size_t num = o;

	while (h)

	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
