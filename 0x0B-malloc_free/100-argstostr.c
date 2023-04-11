#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int x, n, y, siz;
	char *arg;

	siz = 0;
	y = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		n = 0;
		while (av[x][n])
		{
			siz++;
			n++;
		}
		siz++;
		x++;
	}
	arg = malloc((sizeof(char) * siz) + 1);
	if (arg == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		n = 0;
		while (av[x][n])
		{
			arg[y] = av[x][n];
			n++;
			y++;
		}
		arg[y] = '\n';
		y++;
		x++;
	}
	arg[y] = '\0';
	return (arg);
}
