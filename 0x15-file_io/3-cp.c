#include <stdio.h>
#include "main.h"
/**
 * err_file - check if the file is open and handle the errors
 * @file_from: initial file to copy from and to check
 * @file_to: destination file to copy to
 * @argv: argument vector
 *
 * Return: 0
 */
void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error cant read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - function that copies the content from one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t num_read, num_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);
	num_read = 1024;
	while (num_read == 1024)
	{
		num_read = read(file_from, buffer, 1024);
		if (num_read == -1)
			err_file(-1, 0, argv);
		num_written = write(file_to, buffer, num_read);
		if (num_written == -1)
			err_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Errr: can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
