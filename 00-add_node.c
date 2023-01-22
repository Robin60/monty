#include "monty.h"

/**
 * add_node - add new node to a cicular linked list
 * @stack: the linked list
 * @n: the value to add
 *
 * Description: adds new node at the beginning if i stack mode,
 * end if in queue mode
 *
 * Return: ponter to new node, else NULL
 */

stack_t *add_node(stack_t **stack, const int n)
{
	stack_t *newnode;

	/*check if there is no circular list*/
	if (!stack)
		return (NULL);
	newnode = malloc(sizeof(stack_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	/*check if circular list is empty*/
	if (*stack == NULL)
	{
		/*adds newnode as the only element on stack*/
		newnode->next = newnode;
		newnode->prev = newnode;
	}
	else
	{
		/*stack not empty, add newnode on top and next of new to point head*/
		(*stack)->prev->next = newnode;
		newnode->prev = (*stack)->prev;
		(*stack)->prev = newnode;
		newnode->next = *stack;
	}
	/* if stack, head points to newnode, else queue */
	if (var.type == STACK || var.len == 0)
		*stack = newnode;
	return (newnode);
}
