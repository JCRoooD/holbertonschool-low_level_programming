#include "main.h"
/**
 *read_textfile - function that reads a text file and prints it
 *@filename: name of the file
 *@letters: leters to be printed
 *Return: 0 if it fails, otherwise number of letters it can read and print
 *0 if we cant access the file or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, number;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	number = read(fd, buf, letters);

	write(1, buf, letters);

	buf[letters +1] = '\0';

	free(buf);
	close(fd);

	return (number);
}
