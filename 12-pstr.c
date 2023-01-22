#include "monty.h"
#include <ctype.h>
/**
 * mo_pstr - prints the string starting at the top of the stack
 * @stack: the stack
 * @line_number: the line number of operation
 */

void mo_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int ch;

	(void)line_number;

	temp = *stack;
	while (temp)
	{
		ch = temp->n;
		if (!_isascii(ch) || ch == 0)
			break;
		putchar(ch);
		temp = temp->next;
		if (temp == *stack)
			break;
	}
	putchar('\n');
}
