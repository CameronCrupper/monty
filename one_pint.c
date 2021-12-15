#include "monty.h"
/**
 *one_pint - print value at top of stack
 *@stack: stack
 *@linenum: line number
 *
 */
void one_pint(stack_t **stack, unsigned int linenum)
{
	stack_t *head = *stack;

	if (var.stack_len == 0)
	{
		dprintf(STDOUT_FILENO, "L%u: can't pint, stack empty\n", linenum);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
