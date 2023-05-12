#include "monty.h"
/**
 * _push - function that inserts new node in the beginning of
 * doubly linked list
 * @top: pointer
 * @line: line
 */

int data;

void _push(stack_t **top, __attribute__((unused)) unsigned int line)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = data;
	new_node->prev = NULL;

	if (*top == NULL)
	{
		new_node->next = NULL;
		*top = new_node;
	}
	else
	{
		new_node->next = top;
		(*top)->prev = new_node;
		*top = new_node;
	}

}
/**
 * _pall - function that prints all elements in a doubly linked list
 * @top: pointer
 * @line: line
 */
void _pall(stack_ **top, __attribute__((unused)) unsigned int line)
{
	stack_t *tmp = *top;

	while (*tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
/**
 * _pint - function that prints the value of the top element
 * @top: pointer
 * @line: line
 */

void _pint(stack_t **top, __attribute__((unused)) unsigned int line)
{
	if (*top != NULL)
		printf("%d", (*top)->n);
	else
	{
		printf(stderr, "L%u: can't pint, stack empty", line);
		exit(EXIT_FAILURE);
	}
}
/**
 * _pop - function that deletes the top element
 * @top: pointer
 * @line: line
 */
void _pop(stack_t **top, unsigned int line)
{
	stack_t *tmp = *top;

	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	tmp = tmp->next;
	free(*top);
	*top = tmp;
}
/**
 * _swap - function that frees element of stack
 * @top: pointer
 * @line: line
 */
void _swap(stack_t **top, unsigned int line)
{
	int tmp_num;

	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	tmp_num = (*top)->n;
	(*top)->n = (*top)->next->n;
	(*top)->next->n = tmp_num;
}
