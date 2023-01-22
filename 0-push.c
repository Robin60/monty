#include "monty.h"

/**
 * check_digit - checkss that string contains digits only
 * @str: the string
 * Return: 0 if digits, else 1
 */

static int check_digit(char  *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '-' && i == 0)
			continue;
		if (isdigit(str[i]) == 0)
			return (1);
	}
	return (0);
}

/**
 * mo_push - push an elemt to stack
 * @stack: stack top
 * @line_number: the line number in the file
 */

void mo_push(stack_t **stack, unsigned int line_number)
{
	char *str;
	int n;
	int len = var.len;

	str = strtok(NULL, "\n\t\r ");
	if (str == NULL || check_digit(str))
	{
		dprintf(STDOUT_FILENO, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(str);
	if (!add_node(stack, n))
	{
		dprintf(STDOUT_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	len++;
	var.len = len;
}
