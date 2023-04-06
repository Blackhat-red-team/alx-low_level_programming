#include "main.h"
#include <stdio.h>

/**
 * *_strchr - seeks out a character within a string
 * @s: searching a string
 * @c: to find char
 *
 * Return: a reference to the character's first appearance
 * s, or NULL if the character could not be detected, in the string c
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
