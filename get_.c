#include "monty.h"
/**
 * get_ - check op against valid opcodes
 * @op: opcode
 * @stack: stack
 * @linenum: line number
 */
void get_(char *op, stack_t **stack, unsigned int linenum)
{
	size_t a;
	instruction_t type[] = {
		{"push", zero_pp},
		{"pall", pall_},
		{"pint", one_pint},
		{"pop", two_pop},
		{"swap", three_swap},
		{"add", four_add},
		{"nop", five_nop},
		{NULL, NULL},
	};

	for (a = 0; type[a].opcode != NULL; a++)
	{
		if (strcmp(type[a].opcode, op) == 0)
		{
			type[a].f(stack, linenum);
			return;
		}
	}

	dprintf(STDOUT_FILENO,
		"L%u: unknown instruction %s\n",
		linenum, op);
	exit(EXIT_FAILURE);
}
