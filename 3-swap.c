#include "monty.h"

/**
 * mo_swap - swaps the top two elemts of stack
 * @stack: the stack
 * @line_number: line number in the file
 */

void mo_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *nextnode;

	if (var.len < 2)
	{
		dprintf(STDOUT_FILENO, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	/* check if only two nodes in stack */
	if (var.len == 2)
	{
		*stack = (*stack)->next;
		return;
	}
	/* there are more than two nodes */
	nextnode = (*stack)->next;
	nextnode->prev = (*stack)->prev;
	(*stack)->prev->next = nextnode;
	(*stack)->prev = nextnode;
	(*stack)->next = nextnode->next;
	nextnode->next->prev = (*stack);
	nextnode->next = *stack;
	*stack = nextnode;
}
