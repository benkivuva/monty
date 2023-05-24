#ifndef MONTY_H
#define MONTY_H

/* Libraries */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct info_s - Holds information on the current program state
 * @buffer: Input buffer
 * @op: Operation code
 * @argument: Argument for the operation
 * @stack: Stack data structure
 * @fptr: File pointer
 * @mode: Mode (stack or queue)
 * @size: Size of the stack/queue
 * @ln: Line number being processed
 *
 * Description: This structure encapsulates information related to the
 * current state of the program. It includes the input buffer, the operation
 * code and its associated argument, the stack data structure, the file being
 * processed, the mode (whether it's operating in stack or queue mode) the size
 * of the stack or queue, and the line number being processed.
 */
typedef struct info_s
{
    char *buffer;
    char *op;
    char *argument;
    stack_t *stack;
    FILE *fptr;
    unsigned int mode;
    unsigned int size;
    unsigned int ln;
} info_t;
