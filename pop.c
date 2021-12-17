#include "monty.h"
/**
 *two_pop - remove top element of stack
 *@stack: stack
 *@linenum: line number
 */
void two_pop(stack_t **stack, unsigned int linenum)
{
	if (var.stack_len == 0)
	{
		dprintf(STDOUT_FILENO, "L%u: can't pop an empty stack\n", linenum);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->prev = (*stack)->prev;
	(*stack)->prev->next = (*stack)->next;
	if (var.stack_len != 1)
	{
		*stack = (*stack)->next;
	}
	else
	{
		*stack = NULL;
	}
var.stack_len--;
}
