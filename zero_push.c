#include "monty.h"
/**
 * zero_push - push element to the stack
 * @stack: stack
 * @linenum: line number
 */
void zero_push(stack_t **stack, unsigned int linenum)
{
	stack_t *h, *t;

	if (feat.n == NULL || number(feat.n) == 0)
	{
		freedom(*stack);
		fprintf(stderr, "L%u: usage: push integer\n", linenum);
		exit(EXIT_FAILURE);
	}
	h = malloc(sizeof(stack_t));
	if (h == NULL)
	{
		free(*stack);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	h->n = atoi(feat.n);

	if (feat.mode == STACK || (*stack) == NULL)
	{
		/* add node to the top */
		h->prev = NULL;
		h->next = *stack;
		if (*stack)
			(*stack)->prev = h;
		*stack = h;
	}
	else
	{
		/* add node to the end */
		for (t = *stack; t->next != NULL; t = t->next)
			;
		t->next = h;
		h->prev = t;
		h->next = NULL;
	}
}
