#include "main.h"
/**
 * append_text_to_file - function that appends a text at the end of a file
 * @filename: the name of the file to append
 * @text_content: the content of the file to append
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int wrtstatus = 0;

	if (!filename)
		return (0);
	if (text_content == NULL)
		return (1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	wrtstatus = write(file_descriptor, text_content, strlen(text_content));
	if (wrtstatus == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
