#include <stdio.h>

/**
 * main - Printss the alphabeet.
 *
 * Return: Always 0 (Successs=1)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
