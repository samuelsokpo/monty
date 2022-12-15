#include "monty.h"

/**
 * div_stack -Main entry
 * Description: divides the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 * Return void
 **/
void stack_div(stack_t **stack, unsigned int line_number)
{
	stack_t *div = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		free_all(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		free_all(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n / (*stack)->n;
	(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	free(div);
}
