#include "lists.h"

/**
 * insert_nodeint_at_index - add a new node a given position
 * @head: head of the node
 * @idx: index of the list where to insert node
 * @n: integer
 * Return: the address of the new element if success or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr_node, *temp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	}
	ptr_node = malloc(sizeof(listint_t));
	if (ptr_node == NULL)
		return (NULL);
	ptr_node->n = n;
	if (idx == 0)
	{
		ptr_node->next = *head;
		*head = ptr_node;
		return (ptr_node);
	}
	ptr_node->next = temp->next;
	temp->next = ptr_node;
	return (ptr_node);
}
