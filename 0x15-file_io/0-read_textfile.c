#include "main.h"

/**
 * read_textfile - reads the text file
 * @filename: a pointer to the file name
 * @letters: he number of letters it should read and print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filede;
	ssize_t rdn, wrn;
	char *buffer;

	if (filename == NULL)
		return (0);
	filede = open(filename, O_RDONLY);
	if (filede == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	rdn = read(filede, buffer, letters);
	wrn = write(STDOUT_FILENO, buffer, rdn);
	free(buffer);
	close(filede);
	return (wrn);
}
