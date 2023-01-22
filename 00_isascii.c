#include "monty.h"

/**
 * _isascii - checks if valid ascii
 * @ch: the character
 * Return: digit, else 0
 */

int _isascii(int ch)
{
	if ((ch <= 127) && (ch >= 0))
		return (ch);
	else
		return (0);
}
