#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_diggited - checks if a string contains a non-digit char
 * @m: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_diggited(char *m)
{
	int i = 0;

	while (m[i])
	{
		if (m[i] < '0' || m[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strl - returns the length of a string
 * @a: string to evaluate
 *
 * Return: the length of the string
 */
int _strl(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * erro - handles erro for main
 */
void erro(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, car, diggited1, diggited2, *res, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_diggited(s1) || !is_diggited(s2))
		errors();
	len1 = _strl(s1);
	len2 = _strl(s2);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		res[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		diggited1 = s1[len1] - '0';
		car = 0;
		for (len2 = _strl(s2) - 1; len2 >= 0; len2--)
		{
			diggited2 = s2[len2] - '0';
			car += res[len1 + len2 + 1] + (diggited1 * diggited2);
			res[len1 + len2 + 1] = car % 10;
			car /= 10;
		}
		if (car > 0)
			res[len1 + len2 + 1] += car;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
