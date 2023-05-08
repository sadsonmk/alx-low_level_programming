#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return:1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, file_write, letters;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, "u-x");

	if (file_desc == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	file_write = write(file_desc, text_content, letters);

	if (file_write == -1)
		return (-1);

	close(file_desc);

	return (1);
}
