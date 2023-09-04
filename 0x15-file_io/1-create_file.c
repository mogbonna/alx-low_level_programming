#include "main.h"

/**
* create_file - creates a file and writes text to it
* @filename: the name of the file to create or truncate
* @text_content: the text content to write to the file (can be NULL)
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, write_status, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_status = write(fd, text_content, length);

	if (fd == -1 || write_status == -1)
		return (-1);

	close(fd);

	return (1);
}
