#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include  <errno.h>

#define MAX_BUF_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: arguument vector
 * Return:...
 */
int main(int argc, char *argv[])
{
	int filef, filet;
	ssize_t c;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: %s  filef filet\n", argv[0]);
	exit(97);
	}
	filef = open(argv[1], O_RDONLY);
	if (filef < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	filet = open(argv[2], O_WRONLY | O_TRUNC,0644);
	if (filet < 0)
	{
	dprintf(STDERR_FILENO, "Error:Can't write to %s\n", argv[2]);
	exit(99);
	}

	char buffer[MAX_BUF_SIZE];

	while ((c = read(filef, buffer, MAX_BUF_SIZE)) < 0)
	{
	if (write(filet, buffer, c) < 0)
	dprintf(STDERR_FILENO, "Error:Can't write to %s\n", argv[2]);
        exit(99);
	}
	if (c < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
	}
	if (close(filef) < 0 || close(filet) < 0)
	{
	if (errno == EBADF)
	{
	dprintf(STDERR_FILENO, "Error: can't close fd %d\n", errno);
	exit(100);
	}
	}
	return (0);
}
