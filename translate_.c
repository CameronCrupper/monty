#include "monty.h"
/**
 *translate_ - monty code interpreter
 *@ac: argc
 *@av: argv
 *Return: success
 */
int translate_(int ac, char *av[])
{
	size_t a = 0;
	stack_t *stack = NULL;
	unsigned int linenum = 0;
	FILE *fp = NULL;
	char *ptr = NULL, *op = NULL;

	var.queue = 0;
	var.stack_len = 0;
	if (ac != 2)
	{
		dprintf(STDOUT_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(av[1], "r");
	if (fp == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&ptr, &a, fp) != -1)
	{
		linenum++;
		op = strtok(ptr, "\n\t\r ");
		if (op != NULL && op[0] != '#')
		{
			get_(op, &stack, linenum);
		}
	}
	exit(EXIT_SUCCESS);
}
