#include "main.h"

/**
 * append_text_to_file - text that is added at the conclusion of a file.
 * @filename: a reference to the file's name.
 * @text_content: The string that has to be included file's conclusion.
 *
 * Return: -1 if the filename is NULL or the function fails.
 *         -1 if the user doesn't have write access and the file doesn't exist.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, l, lens = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lens = 0; text_content[lens];)
			lens++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	l = write(p, text_content, lens);

	if (p == -1 || l == -1)
		return (-1);

	close(p);

	return (1);
}

