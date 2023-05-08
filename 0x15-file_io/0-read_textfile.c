#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and the contents to POSIX stdout.
 * @filename: a reference to the file's name.
 * @letters: The quantity of letters in
 *           read and print should be functions.
 *
 * Return: 0 if the filename is NULL or the function fails.
 *         The function's real read-and-print is the number of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p, s, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	p = open(filename, O_RDONLY);
	s = read(p, buff, letters);
	w = write(STDOUT_FILENO, buff, s);

	if (p == -1 || s == -1 || w == -1 || w != s)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(p);

	return (w);
}

