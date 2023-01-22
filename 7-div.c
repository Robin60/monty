#include "monty.h"

/**
 * mo_div - divides the second top element by top element
 * @stack: the stack
 * @line_number: the line number of operation
 */

void mo_div(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.len < 2)
	{
		dprintf(STDOUT_FILENO, "L:%u: can't div, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	mo_pop(stack, line_number);
	if (n == 0)
	{
		dprintf(STDOUT_FILENO, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->n /= n;
}
