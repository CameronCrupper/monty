#include "monty.h"
/**
 *three_swap - swap top two elments of the stack
 *@stack: stack
 *@linenum: line number
 */
void three_swap(stack_t **stack, unsigned int linenum)
{
	stack_t *a;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", linenum);
		freedom(*stack);
		exit(EXIT_FAILURE);
	}
a = (*stack)->next;
(*stack)->next = a->next;
a->next = (*stack);
(*stack)->prev = a;
a->prev = NULL;
*stack = a;
}
