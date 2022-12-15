#include "monty.h"

/**
 * queue_operation -Main entry
 * Description: set to queue mode
 * @stack: unused
 * Return void
 **/

void op_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	mem.mode = QUEUE;
}
