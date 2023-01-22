#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct var_s - contain main variables of monty intepreter
 * @type: determine queue or stack
 * @len: length of data structure
 */

typedef struct var_s
{
	int type;
	size_t len;
} var_t;

#define STACK 0
#define QUEUE 1

/*Global struct to hold tack and queue flag*/
var_t var;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * 
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

stack_t *add_node(stack_t **head, const int n);
int _isascii(int ch);
void mo_push(stack_t **stack, unsigned int line_number);
void mo_pall(stack_t **stack, unsigned int line_number);
void mo_pint(stack_t **stack, unsigned int line_number);
void mo_pop(stack_t **stack, unsigned int line_number);
void mo_swap(stack_t **stack, unsigned int line_number);
void mo_add(stack_t **stack, unsigned int line_number);
void mo_nop(stack_t **stack, unsigned int line_number);
void mo_sub(stack_t **stack, unsigned int line_number);
void mo_div(stack_t **stack, unsigned int line_number);
void mo_mul(stack_t **stack, unsigned int line_number);
void mo_mod(stack_t **stack, unsigned int line_number);
void mo_pchar(stack_t **stack, unsigned int line_number);
void mo_pstr(stack_t **stack, unsigned int line_number);
void mo_rotl(stack_t **stack, unsigned int line_number);
void mo_rotr(stack_t **stack, unsigned int line_number);
void get_op(char *op, stack_t **stack, unsigned int line_number);
/*void file_close(int status, void *ptr);*/
/*void free_lineptr(int status, void *ptr);*/
/*void free_stack(int status, void *ptr);*/
void mo_stack(stack_t **stack, unsigned int line_number);
void mo_queue(stack_t **stack, unsigned int line_number);

#endif
