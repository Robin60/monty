#include "monty.h"

/**
 * mo_mul - multiplies the second top by top, pop top
 * @stack: the stack
 * @line_number: the line number in operation
 */

void mo_mul(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.len < 2)
	{
		dprintf(STDOUT_FILENO, "L:%u can't mul, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	mo_pop(stack, line_number);
	(*stack)->n *= n;
}
