#include "monty.h"
/**
 * _free - function that frees elements of stack
 * @head: list to free
 */
void _free(stack_t *head)
{
	stack_t *tmp;

	if (top == NULL)
		return;
	while (top != NULL)
	{
		tmp = top;
		top = top->next;
		free (tmp);
	}
	free (top);
}
