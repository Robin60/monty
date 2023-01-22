#include "monty.h"

/**
 * main - Monty bytecode interpreter
 * @argc: the arguments count
 * @argv: the array of argument strings:
 * Return: EXIT_SUCCESS, else EXIT_FAILURE on failure
 */

int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	FILE *fp = NULL;
	char *lineptr = NULL;
	char *op = NULL;
	size_t n = 0;

	var.type = 0;
	var.len = 0;
	if (argc != 2)
	{
		dprintf(STDOUT_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*on_exit(free_lineptr, lineptr);*/
	/*on_exit(free_stack, head);*/
	/*on_exit((file_close, fp));*/
	while (getline(&lineptr, &n, fp) != -1)
	{
		line_number++;
		op = strtok(lineptr, "\n\t\r ");
		if (op != NULL && op[0] != '#')
		{
			get_op(op, &stack, line_number);
		}
	}
	exit(EXIT_SUCCESS);
}
