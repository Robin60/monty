#include "monty.h"

/**
 * file_close - close file stream
 * @status: status passed to exit
 * @ptr: pointer to file stream
 */

void file_close(int status, void *ptr)
{
	FILE *fp;

	(void)status;

	fp = (FILE *) ptr;
	fclose(fp);
}
