#include "monty.h"

/**
 * pint - print the value at the top of the stack
 * @temp: top of stack in doubly linked list
 * @line_num: line number on CL
 */
void pint(stack_t *temp, int line_num)
{
	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
}
