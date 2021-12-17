#include "monty.h"
/**
 * number - is a number?
 * @str: string
 * Return: 1 or 0
 */
int number(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a == 0 && str[a] == '-')
		{
			if (str[a + 1] == '\0')
			return (0);
		}
		else if (str[a] < 48 || str[a] > 57)
		return (0);
	}
return (1);
}
