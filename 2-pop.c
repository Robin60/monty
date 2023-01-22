#include "monty.h"

/**
 * mo_pop - removes the top element of stack
 * @stack: the stack
 * @line_number: line number
 */

void mo_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (var.len == 0)
	{
		dprintf(STDOUT_FILENO, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->prev = (*stack)->prev;
	(*stack)->prev->next = (*stack)->next;
	if (var.len != 1)
		*stack = (*stack)->next;
	else
		*stack = NULL;
	free(temp);
	var.len--;
}
