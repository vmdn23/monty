#include "monty.h"

/**
 * op_pint - prints the value at the top of the stack
 * @stack - double pointer to the stack
 * @line_number - current line number
 * Return: void
 */

void op_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stdout, "L<%d>: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
