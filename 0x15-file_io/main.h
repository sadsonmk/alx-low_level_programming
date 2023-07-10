#ifndef MAIN_H
#define MAIN_H

/* standard library */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: is the file to be read
 * @letters: is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * else 0 if the file can not be opened or read
 * if filename is NULL
 * if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - is a function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - is a function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);



#endif /* main.h */
