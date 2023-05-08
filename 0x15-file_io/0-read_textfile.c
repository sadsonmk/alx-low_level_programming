#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: pointer to the file input
 * @letters: number of letters it should read and print
 * Return: he actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_read, file_write;

	char *buffer;

	int file_desc;

	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	file_read = read(file_desc, buffer, letters);

	file_write = write(STDOUT_FILENO, buffer, file_read);

	close(file_desc);

	free(buffer);

	return (file_write);
}
