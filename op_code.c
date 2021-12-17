#include "monty.h"
/**
 * op_code - check op against valid opcodes
 */
void op_code(void)
{
	int a;
	size_t b = 0;
	char *c = NULL;
	unsigned int linenum = 0;
	instruction_t type[] = {
		{"push", zero_push}, {"pall", zero_pall},
		{"pint", one_pint},
		{"pop", two_pop},
		{"swap", three_swap},
		{"add", four_add},
		{"nop", five_nop},
		{NULL, NULL},
	};
	stack_t *stack = NULL;

	while (getline(&c, &b, feat.scr) != -1)
	{
		linenum++;
		/* Finds opcode in ops[] */
		feat.tok = strtok(c, " \n");
		if (feat.tok == NULL || feat.tok[0] == '#')
			continue;
		for (a = 0; type[a].opcode != NULL; a++)
		{
			/* Compare two strings, if they re the same return zero */
			if (strcmp(type[a].opcode, feat.tok) == 0)
			{
				feat.n = strtok(NULL, " \n");
				type[a].f(&stack, linenum);
				break;
			}
		}
		if (type[a].opcode == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", linenum, feat.tok);
			exit(EXIT_FAILURE);
		}
	}
}
