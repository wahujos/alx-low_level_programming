#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: a pointer to the file to be created
 * . filename is the name of the file to be created.
 * @text_content: a null terminated string to write to the file.
 * Return: 1 success -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_content;
	size_t text_length;
	mode_t permission = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permission);
		if (fd < 0)
		{
			return (-1);
		}
	if (text_content != NULL)
	{
		text_length = strlen(text_content)
	write_content = write(fd, text_content, text_length);
	if (write_content == -1)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
	return (1);
}
