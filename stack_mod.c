#include "monty.h"

/**
 * mod_stack -Main entry
 * Description: mods the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 * Return void
 **/
void stack_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *mod = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		free_all(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		free_all(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n % (*stack)->n;
	(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	free(mod);
}
