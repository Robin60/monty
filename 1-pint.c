#include "monty.h"

/**
 * mo_pint - print value at the top of stack
 * @stack: the stack
 * @line_number: line number of current opcode
 */

void mo_pint(stack_t **stack, unsigned int line_number)
{
	if (var.len == 0)
	{
		dprintf(STDOUT_FILENO, "L%u: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
