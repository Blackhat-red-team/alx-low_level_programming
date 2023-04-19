#include "3-calc.h"

/**
 * get_op_func - the function a pointer that selects the is correct function to perform
 * the operation he is asked by the user
 * @s: the operator is given by the user
 *
 * Return: the pointer to the function that corresponds to the
 * operator the given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
