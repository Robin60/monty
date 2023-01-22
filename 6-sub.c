#include "monty.h"

/**
 * mo_sub - subtracts top element from second top element
 * @stack: the stack
 * @line_number: the line number of operation
 */

void mo_sub(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.len < 2)
	{
		dprintf(STDOUT_FILENO, "L%u: can't sub, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	mo_pop(stack, line_number);
	(*stack)->n -= n;
}
