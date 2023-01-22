#include "monty.h"

/**
 * mo_rotr - rotates the stack to the bottom
 * @stack: the stack
 * @line_number: the line number f operation
 */

void mo_rotr(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (*stack)
		*stack = (*stack)->prev;
}
