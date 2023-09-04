#include "main.h"

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
	int fd;
	int r, w;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);
	r = read(fd, buf, letters);

	if (r < 0)
	{
		free(buf);
		return (0);
	}
	buf[r] = '\0';
	close(fd);

	w = write(STDOUT_FILENO, buf, w);

	if (w < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}

