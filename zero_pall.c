#include "monty.h"
/**
 *zero_pall - print value on stack
 *@stack: stack
 *@linenum: line number
 */
void zero_pall(stack_t **stack, unsigned int linenum)
{
	stack_t *current;
	(void)linenum;

	for (current = *stack; current != NULL; current = current->next)
	printf("%d\n", current->n);
}
