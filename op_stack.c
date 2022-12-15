#include "monty.h"

/**
 * op_stack -Main entry
 * Description: frees all allocated memory
 * @stack: unused
 * @line_number: unused
 * Return: void
 **/

void op_stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	mem.mode = STACK;
}
