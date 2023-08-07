#include "main.h"


char *create_buffer(char *file);
void file_close(int fd);

/**
 * file_close - closes the file descriptor(fd).
 * @fd: The file descriptor which you want to close.
 * Return: void
 */
void file_close(int fd)
{
	int b;

	b = close(fd);

	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - Allocation of bytes to a buffer
 * @file: The name of the file
 * Return: Pointer to the allocated buffer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: is the argumente vector
 * Return: Always 0 (success)
 */


int main(int argc, char *argv[])
{
	int file_from, file_to, file_read, file_write;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_read = read(file_from, buff, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	do {

		if (file_from == -1 || file_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		file_write = write(file_to, buff, file_read);
		if (file_to == -1 || file_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		file_read = read(file_from, buff, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (file_read > 0);

	free(buff);
	file_close(file_from);
	file_close(file_to);

	return (0);
}

