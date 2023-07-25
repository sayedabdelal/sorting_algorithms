#include "sort.h"
/**
 * insertion_sort_list - Function insert on a linked list
 *
 * @list: is a double ptr to the first node
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = (*list)->next;
	listint_t *insert_point = NULL;
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	if (*list == NULL)
	{
		exit(98);
	}
	else
	{
		while (node != NULL)
		{
			insert_point = node->prev;

			while (insert_point != NULL &&  node->n <= insert_point->n)
			{
				prev_node = insert_point->prev;
				next_node = node->next;

				insert_point->next = next_node;
				if (node->next != NULL)
					next_node->prev = insert_point;

				node->next = insert_point;
				node->prev = prev_node;

				if (prev_node != NULL)
					prev_node->next = node;
				else
					*list = node;


				insert_point->prev = node;
				insert_point = node->prev;
				print_list((const listint_t *)*list);
			} node = node->next;
		}

	}
}
