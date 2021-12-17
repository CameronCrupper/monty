#include "monty.h"
/**
 * push_ - push element to the stack
 * @stack: stack
 * @str: string
 * @linenum: line number
 */
void push_(stack_t **stack, unsigned int linenum, char *str)
{
	int n;
	stack_t *NN = malloc(sizeof(stack_t));

	if (strcmp("0", str) == 0)
	{
		n = 0;
	}
	else if (atoi(str) != 0)
	{
		n = atoi(str);
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", linenum);
		free(NN);
		return;
	}
	if (!NN)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(NN);
		exit(EXIT_FAILURE);
	}
	NN->prev = NULL;
	NN->n = n;
	NN->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = NN;
	}
	*stack = NN;
}
