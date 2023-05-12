/**
 * _add - function that adds top two elements of stack
 * @top: pointer
 * @line: line
 */
void _add(stack_t **top, unsigned int line)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	tmp = (*top)->next;
	tmp->n -= (*top)->n;
	_pop(top, line);
}
/**
 * _nop - function that does nothing
 * @top: pointer
 * @line: line
 */
void _nop(stack_t **top, unsigned int line)
{
	(void) top;
	(void) line;
}
