#include "main.h"

/**
 * main - Entry to the program
 * @argc: is the argument count
 * @argv: is the argument vector(dynamic array)
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	unsigned char elfh[ELF_HEADER_SIZE];
	char *filename;
	int fd, bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(1);
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		exit(1);
	}
	bytes_read = read(fd, elfh, ELF_HEADER_SIZE);
	if (bytes_read != ELF_HEADER_SIZE)
	{
		fprintf(stderr, "Failed to read ELF header\n");
		exit(1);
	}
	if (elfh[0] != 0x7f && elfh[1] != 'E' && elfh[2] != 'L' && elfh[3] != 'F')
	{
		fprintf(stderr, "File is not an ELF file\n");
		exit(1);
	}
	printf("Magic: %02x %02x %02x %02x\n", elfh[0], elfh[1], elfh[2], elfh[3]);
	printf("Class: %d\n", elfh[4]);
	printf("Data: %d\n", elfh[5]);
	printf("Version: %d\n", elfh[6] + (elfh[7] << 8));
	printf("OS/ABI: %d\n", elfh[8]);
	printf("ABI Version: %d\n", elfh[9] + (elfh[10] << 8));
	printf("Type: %d\n", elfh[11]);
	printf("Entry point address: %x\n", *(unsigned int *)(elfh + 24));
	close(fd);
	return (0);
}
