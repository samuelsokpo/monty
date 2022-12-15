#include "monty.h"

/**
 * add_stack -Main entry
 * Description: adds an element to the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 * Return void
 **/

void stack_add(stack_t **stack, unsigned int line_number)
{
	stack_t *add = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		free_all(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->n + (*stack)->next->n;
	(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	free(add);
}
