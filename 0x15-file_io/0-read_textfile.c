#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the STDOUT
 * @filename: name of textfile
 * @letters: number of letters to be read
 *
 * Return: the actual number of letters it could read and print,
 * 0 if the file can not be opened or read,
 * and 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, r;
	char *ptBuf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	r = read(fd, ptBuf, letters);
	w = write(STDOUT_FILENO, ptBuf, r);
	if ((w != r) || (fd == -1) || (r < 0))
		return (0);
	free(ptBuf);
	close(fd);
	return (w);
}
