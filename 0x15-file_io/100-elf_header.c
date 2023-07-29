#include "main.h"

void check_for_argc(int argc);
/**
 * main - Entry into the program
 * @argc: is the argument count
 * @argv: is the argument vector
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int fd;
	off_t offset = 0;

	check_for_argc(argc);

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Open");
		return (1);
	}
	if (lseek(fd, offset, SEEK_SET) < 0)
	{
		perror("lseek");
		return (1);
	}
	Elf64_Ehdr elf_header;

	nread = read(fd, &elf_header, sizeof(elf_header));
	if (nread < 0)
	{
		perror("read");
		return (1);
	}
	if (elf_header.e_ident[EI_MAG] != ELFMAG)
	{
		fprintf(stderr, "Not an ELF file\n");
		return (98);
	}
	printf("Magic: %08x\n", elf_header.e_ident[EI_MAG]);
	printf("Class: %d\n", elf_header.e_class);
	printf("Data: %d\n", elf_header.e_data);
	printf("Version: %d\n", elf_header.e_version);
	printf("OS/ABI: %d\n", elf_header.e_osabi);
	printf("ABI Version: %d\n", elf_header.e_obiversion);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: %#x\n", elf_header.e_entry);
	close(fd);
	return (0);
}

/**
 * check_for_argc - is for checking for argc
 * @argc: is the argument count
 * Return: void
 */
void check_for_argc(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		return (1);
	}
}

