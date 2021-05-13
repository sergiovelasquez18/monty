#ifndef _MONTY_H
#define _MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
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
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct help - helper functions
 * @token2: the opcode
 * @buffer: function to handle the opcode
 * @fp: pointer to file
 * @head: pointer to beginning of list
 * @line_number: line number file
 * @n: number of bytes read
 * @token1: pointer to token 2
 * @queueflag: flag for queue function
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct help
{
	char *token2;
	char *buffer;
	FILE *fp;
	stack_t *head;
	size_t line_number;
	size_t n;
	char *token1;
	int queueflag;
} helpers;
extern helpers helpy;

void push(stack_t **head, unsigned int line_number);
void pall(stack_t **head, unsigned int line_number);
void free_dlistint(stack_t *head);
int montyprocess(void);
void free_everything(void);
int _isnumber(void);
int queuepush(stack_t **head, unsigned int line_number);
int montycompare(void);
#endif /* _MONTY_H */