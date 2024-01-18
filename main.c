#include "monty.h"
/**
 * main - the entry point
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0(success) else error set appropriately
 */

int main(int argc, char **argv)
{
if (argc != 2)
{
fprintf(stderr, "EMPLOY: monty file\n");
exit(EXIT_FAILURE);
}
open_file(argv[1]);
free_nodes();
return (0);
}
