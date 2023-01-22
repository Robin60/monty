#include "monty.h"

/**
 * mo_mod - mode of second top element by top element, pop top
 * @stack: the stack
 * @line_number: the line number of operation
 */

void mo_mod(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.len < 2)
	{
		dprintf(STDOUT_FILENO, "L:%u: can't mod, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	mo_pop(stack, line_number);
	if (n == 0)
	{
		dprintf(STDOUT_FILENO, "L:%u: division by zero", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->n %= n;
}
