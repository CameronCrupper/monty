#include "monty.h"
/**
 *pall_ - print value on stack
 *@stack: stack
 *@linenum: line number
 */
void pall_(stack_t **stack, unsigned int linenum)
{
	int a = 0;
	stack_t *NN = *stack;

	(void)linenum;

	while (NN != NULL)
	{
		printf("%d\n", NN->n);
		NN = NN->next;
		a++;
	}
}
