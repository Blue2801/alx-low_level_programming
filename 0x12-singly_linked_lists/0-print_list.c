#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - Prints all elements of a list
  * @h: A linked list
  *
  * Return: The number of nodes
  */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	size_t count = 0;
	const list_t *current = h;

	do {
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);

		current = current->next;
		count++;
	} while (current != NULL);

	return (count);
}

