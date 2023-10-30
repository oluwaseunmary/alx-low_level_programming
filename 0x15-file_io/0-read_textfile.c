#include "main.h"
/**
 * read_textfile - reads a text file and print it to the POSIX stdoutput
 * @filename: the name of the file to be read
 * @letters: The number of the letter it shouls print and read
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t num_read, num_written;
	char *buffer;

	if (!filename)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	num_read = read(file_descriptor, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	num_written = write(STDOUT_FILENO, buffer, num_read);
	if (num_written == -1 || num_written != num_read)
	{
		free(buffer);
		close(file_descriptor);
			return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (num_read);
}
