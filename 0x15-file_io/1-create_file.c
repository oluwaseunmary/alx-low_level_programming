#include <string.h>
#include "main.h"
/**
 * create_file - function tat create file and write content to it
 * @filename: the name of the file to create
 * @text_content: the content of the file created
 *
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int wrtstatus = 0;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		wrtstatus = write(file_descriptor, text_content, strlen(text_content));
		if (wrtstatus == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
