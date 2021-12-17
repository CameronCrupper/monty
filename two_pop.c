#include "monty.h"
/**
 *two_pop - remove top element of stack
 *@stack: stack
 *@linenum: line number
 */
void two_pop(stack_t **stack, unsigned int linenum)
{
	stack_t *pop = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", linenum);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	free(pop);
	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
}
