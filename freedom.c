#include "monty.h"
/**
 * freedom - free list
 * @stack: pointer to linked list
 */
void freedom(stack_t *stack)
{
	stack_t *remove = stack;

	while (stack)
	{
		stack = stack->next;
		free(remove);
		remove = stack;
	}
	free(feat.tok);
	fclose(feat.scr);
}
