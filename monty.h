#ifndef MONTY
#define MONTY
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
*enum sqm - queue and stack
*@STACK: stack top
*@QUEUE: queue end
*
*/
enum sqm
{
	STACK, QUEUE
};

/**
* struct var_s - main variables
* @queue: stack or que
* @stack_len: stack length
*/
typedef struct feature_s
{
	char *n;
	char *tok;
	FILE *scr;
	enum sqm mode;
} feature_t;

extern feature_t feat;

void one_pint(stack_t **stack, unsigned int linenum);
void two_pop(stack_t **stack, unsigned int linenum);
void op_code(void);
void zero_pall(stack_t **stack, unsigned int linenum);
int main(int ac, char const *av[]);
void zero_push(stack_t **stack, unsigned int linenum);
void three_swap(stack_t **stack, unsigned int linenum);
void four_add(stack_t **stack, unsigned int linenum);
void five_nop(stack_t **stack, unsigned int linenum);
int number(char *str);


#endif
