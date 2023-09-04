#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - function that reads a text
 *  file an prints it to POSIX standard output
 *  @filename: a pointer to the file
 *  @letters: number of letters to read and print
 *  Return: actaul no of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_printed;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY, O_CREAT);
	if (fd < 0)
	{
		return (0);
	}
	buff = malloc(letters * sizeof(size_t));
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buff, letters);
	if (bytes_read < 0)
	{
		close(fd);
		free(buff);
		return (0);
	}
	bytes_printed = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_printed != bytes_read)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (bytes_read);
}
