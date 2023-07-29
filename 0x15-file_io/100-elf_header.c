#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include "main.h"

/**
 * main - Entry into the program
 * @argc: is the argument count
 * @argv: is the argument vector
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int fd;
	char buf[1024];
	ssize_t nread;

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Open");
		return (1);
	}

	nread = read(fd, buf, sizeof(buf));
	if (nread < 0)
	{
		perror("read");
		return (1);
	}
	write(STDOUT_FILENO, buf, nread);
	close(fd);

	return (0);
}
