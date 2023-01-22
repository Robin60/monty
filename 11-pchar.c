#include "monty.h"

/**
 * mo_pchar - prints the char at the top of stack
 * @stack: the  stack
 * @line_number: the line number of operation
 */

void mo_pchar(stack_t **stack, unsigned int line_number)
{
	int ch;

	if (var.len < 1)
	{
		dprintf(STDOUT_FILENO, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	ch = (*stack)->n;
	if (!_isascii(ch))
	{
		dprintf(STDOUT_FILENO, "L%u: can't pchar, value out of range\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ch);
}
