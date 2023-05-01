#include "lists.h"

/**
 * print_listint - prints all elements in a linked list
 * @h: linked list type listint_t to get printed
 *
 * Return: amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
