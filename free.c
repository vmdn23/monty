#include "monty.h"


void free_list(stack_t *stack)
{
	stack_t *temp;
	if (!stack)
		return;
	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
