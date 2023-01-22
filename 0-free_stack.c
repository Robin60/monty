#include "monty.h"

/**
 * free_stack - frees the stack on exit
 * @status: exit status
 * @ptr: pointer to stack
 */

void free_stack(int status, void *ptr)
{
	stack_t **head;
	stack_t *nextnode;

	(void)status;

	head = (stack_t **)ptr;
	if (*head)
	{
		(*head)->prev->next = NULL;
		(*head)->prev = NULL;
	}
	while (*head != NULL)
	{
		nextnode = (*head)->next;
		free(*head);
		*head = nextnode;
	}
	var.len = 0;
}
