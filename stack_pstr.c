#include "monty.h"

/**
 * pint_stack -Main entry
 * Description: prints a string starting at the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 * Return void
 **/

void stack_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;
	while (current != NULL && current->n >= 32 && current->n <= 127)
	{
		printf("%c", current->n);
		current = current->next;
	}
	putchar('\n');
}
