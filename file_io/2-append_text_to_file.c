#include "main.h"
/**
 *append_text_to_file - function that appends text at the end of the file
 *@filename: name of the file given
 *@text_content: content of the textfile
 *Return: 1 on success or -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
		close(fd);
	}
	return (1);
}
