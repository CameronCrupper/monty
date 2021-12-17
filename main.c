#include "monty.h"
feature_t feat;
/**
 *main - monty code interpreter
 *@ac: argc
 *@av: argv
 *Return: 0
 */
int main(int ac, char const *av[])
{
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	feat.mode = STACK;
	feat.scr = fopen(av[1], "r");
	if (feat.scr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		return (EXIT_FAILURE);
	}
op_code();
return (0);
}
