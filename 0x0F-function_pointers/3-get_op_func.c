#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct is function to perform
 * the operation asked by the is user
 * @s: the operator is given by the user
 *
 * Return: pointer to the function is that corresponds to the
 * operator given as a is parameter
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
