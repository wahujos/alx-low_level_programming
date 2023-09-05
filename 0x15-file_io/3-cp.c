#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * main - function that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{

	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	int fd_to, fd_from;

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_to = open(argv[2], O_WRONLY | O_TRUNC);
	if (fd_to == -1)
	{
		perror("Error: Can't write to file");
		close(fd_to);
		exit(99);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		perror("Error: Can't write to file");
		close(fd_from);
		exit(98);
	}
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			perror("Error: Can't write to file");
			close(fd_to);
			close(fd_from);
			exit(99);
		}
	}
	return (0);
}
