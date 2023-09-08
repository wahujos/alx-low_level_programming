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
	ssize_t bytes_written, bytes_read;
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from, fd_to;

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to");
		return (97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		perror("Cant't write to file");
		return (99);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		perror("Error: cant write to file");
		close(fd_from);
		return (99);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			perror("Error: Can't write to file");
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		perror("Error: can't read from file");
		close(fd_to);
		close(fd_from);
		return (98);
	}
	return (0);
}

