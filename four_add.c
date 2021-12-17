#include "monty.h"
/**
 *four_add - add top 2 elements of the stack
 *@stack: stack
 *@linenum: line number
 */
void four_add(stack_t **stack, unsigned int linenum)
{
	stack_t *new = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", linenum);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->n + (*stack)->next->n;
	(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	free(new);
}
