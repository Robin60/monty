#include "monty.h"

/**
 * mo_pall - print all values on `stack' starting from the top
 * @stack: pointer to head of stack
 * @line_number: line number being executed
 */

void mo_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)(line_number);

	temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		if (temp == *stack)
			return;
	}
}
