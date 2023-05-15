#include "monty.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument values
 * Return: Succes
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	open_file(argv);
	return (0);
}
