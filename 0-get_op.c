#include "monty.h"

/**
 * get_op -checks operation against valid opcodes
 * @op: the operation
 * @stack: the stack
 * @line_number: line number of operation
 */

void get_op(char *op, stack_t **stack, unsigned int line_number)
{
	size_t i;
	instruction_t valid_ops[] = {
		{"push", mo_push},
		{"pall", mo_pall},
		{"pint", mo_pint},
		{"pop", mo_pop},
		{"swap", mo_swap},
		{"add", mo_add},
		{"nop", mo_nop},
		{"sub", mo_sub},
		{"mul", mo_mul},
		{"div", mo_div},
		{"mod", mo_mod},
		{"rotl", mo_rotl},
		{"rotr", mo_rotr},
		{"pchar", mo_pchar},
		{"pstr", mo_pstr},
		{"stack", mo_stack},
		{"queue", mo_queue},
		{NULL, NULL}
	};
	for (i = 0; valid_ops[i].opcode != NULL; i++)
	{
		if (strcmp(valid_ops[i].opcode, op) == 0)
		{
			valid_ops[i].f(stack, line_number);
			return;
		}
	}
	dprintf(STDOUT_FILENO, "L%u: unknown instruction %s\n", line_number, op);
	exit(EXIT_FAILURE);
}
