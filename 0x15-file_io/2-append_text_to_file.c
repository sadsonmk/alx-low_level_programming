#include "main.h"

/**
 * append_text_to_file - is a function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, file_write, letters;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		file_write = write(file_desc, text_content, letters);

		if (file_write == -1)
			return (-1);

	}
	close(file_desc);

	return (1);
}

