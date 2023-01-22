#include "monty.h"

/**
 * mo_add - adds the top two elements of stack
 * @stack: the stack
 * @line_number: line number in the file
 */

void mo_add(stack_t **stack, unsigned int line_number)
{
	int n = 0;

	if (var.len < 2)
	{
		dprintf(STDOUT_FILENO, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n += (*stack)->n;
	mo_pop(stack, line_number);
	(*stack)->n += n;
}
