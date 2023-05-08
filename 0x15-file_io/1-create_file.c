#include "main.h"

/**
 * create_file - create produces a file.
 * @filename: a pointer to the file's name that has to be created.
 * @text_content: a string pointer that may be written to the file.
 *
 * Return: If the function is unsuccessful, -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int p, l, lens = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lens = 0; text_content[lens];)
			lens++;
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	l = write(p, text_content, lens);

	if (p == -1 || l == -1)
		return (-1);

	close(p);

	return (1);
}

