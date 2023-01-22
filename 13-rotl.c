#include "monty.h"

/**
 * mo_rotl - rotates the stack to the top
 * @stack: the stack
 * @line_number: the line number of the operation
 */

void mo_rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack)
		*stack = (*stack)->next;
}
