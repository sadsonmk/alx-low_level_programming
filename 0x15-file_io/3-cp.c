#include "main.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: is the argumente vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, file_read, file_write, file_close;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_read = read(file_from, buffer, 1024);
	if (file_read == -1)
		return (-1);
	file_write = write(file_to, buffer, file_read);
	if (file_write == -1)
		return (-1);
	file_close = close(file_from);
	if (file_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	file_close = close(file_to);
	if (file_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
