#include <monty.h>

void (*get_op(char *token, unsigned int line))(stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t op[] = {{"push", _push},
		      {"pall", _pall},
		      {"pint", _pint},
		      {"pop", _pop},
		      {"swap", _swap},
		      {"add", _add},
		      {"nop", _nop},
		      {NULL, NULL},
	};

	for(i = 0; op[i].op_code != NULL; i++)
	{
		if(strcmp(token, op[i].op_code) == 0)
			return (op[i].f);
	}
	return (NULL);
}

