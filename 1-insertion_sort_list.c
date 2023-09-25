#include "sort.h"
#include <stdio.h>


/**
 * insertion_sort_list - sorts the given linked list
 * @list: doubly linked list
 * Return: noting
 */

void insertion_sort_list(listint_t **list)
{
	listint_t **prev;
	int temp;

	while (*list != NULL)
	{
		prev = list;
		while (*prev != NULL && (*prev)->prev->n > (*prev)->n)
		{
			temp = (*prev)->prev->n;
			(*prev)->prev->n = (*prev)->n;
			(*prev)->n = temp;
			prev = list.prev;
		}
	}
}
