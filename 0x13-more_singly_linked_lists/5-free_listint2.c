#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: first node of list
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
	{
		ptr = *head;
		return;
	}

	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
}
