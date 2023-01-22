#include "monty.h"

/**
 * free_lineptr - frees line pointer returned by getline
 * @status: exit status
 * @ptr: pointer to line
 */

void free_lineptr(int status, void *ptr)
{
	char **lineptr = ptr;

	(void)status;
	if (*lineptr != NULL)
		free(*lineptr);
}
