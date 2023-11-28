#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file
 * @letters: number of bytes to read
 *
 * Return: size printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	b = read(file, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(file);
	return (b);
}
