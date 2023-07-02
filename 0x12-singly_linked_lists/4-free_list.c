#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: points to the head of the list
 */
void free_list(list_t *head)
{
	list_t *nwd;

	while (head != NULL)
	{
		nwd = head;
		head = head->next;
		free(nwd->str);
		free(nwd);
	}
}
