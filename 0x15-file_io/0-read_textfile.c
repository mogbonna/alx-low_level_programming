#include "main.h"
#include <stdlib.h>

/**
* read_textfile - reads a text file and prints it to POSIX stdout
* @filename: the name of the file to read
* @letters: the number of letters to read and print
*
* Return: the actual number of letters read and printed,
* 0 on failure to open, read, or write
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, bytes_read, bytes_written;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff  = malloc(sizeof(char) * letters);
	bytes_read = read(fd, buff, letters);
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);

	free(buff);
	close(fd);
	return (bytes_written);
}
