#include <stdio.h>
#include "main.h"
/**
 * main - function that copies the content from one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t num_read, num_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	while ((num_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		num_written = write(file_to, buffer, num_read);
		if (num_written == -1)
		{
			exit(99);
		}
	}
	if (num_read == -1)
	{
		exit(98);
	}
	if (close(file_from) == -1)
	{
		exit(100);
	}
	if (close(file_to) == -1)
	{
		exit(100);
	}
	return (0);
}
