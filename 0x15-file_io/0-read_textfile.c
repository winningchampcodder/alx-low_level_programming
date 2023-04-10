#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it to the POSIX standard output.
 * @filename - points the name of the file
 * @letters -  number of letters the function should read and print
 * Return: if the function fails or the filename is null - 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	o = open(filename, o_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(0);

	return (w);
}
