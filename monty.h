#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


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
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*Helper functions*/
int _isdigit(int c);
stack_t *operation(char line[100], stack_t *temp, int line_num);
int findchar(char *value_str, char *search);
void part1(stack_t *temp, char *opcode, int line_num);
void part2(stack_t *temp, char *opcode, int line_num);

/*put and print all operations*/
stack_t *push(int val, stack_t *temp, int line_num);
void pall(stack_t *temp);
void pint(stack_t *temp, int line_num);
void pop(stack_t **temp, int line_num);
void swap(stack_t **temp, int line_num);
void nop(void);
void free_monty_list(stack_t *temp);
int check_spaces(char *line);
void add(stack_t **temp, int line_num);
void sub(stack_t **temp, int line_num);
void mul(stack_t **temp, int line_num);
void divide(stack_t **temp, int line_num);
void mod(stack_t **temp, int line_num);


/*shared declaration*/
/*extern stack_t *temp;*/

#endif
