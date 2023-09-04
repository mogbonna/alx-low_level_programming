#include "main.h"

/**
* append_text_to_file - appends text to the end of a file
* @filename: the name of the file to append to
* @text_content: the text content to append
*
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int m, write_status, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	m = open(filename, O_WRONLY | O_APPEND);
	write_status = write(m, text_content, length);

	if (m == -1 || write_status == -1)
		return (-1);

	close(m);

	return (1);
}
