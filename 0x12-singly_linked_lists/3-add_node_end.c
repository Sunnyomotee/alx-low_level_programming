#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add new nodes to the end of the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp;
	list_t *ptr = *head;

	while (str[len])
		len++;
	temp = malloc(sizeof(temp));
	if (temp == NULL)
		return (temp);
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
