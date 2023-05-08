#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - A function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: - text file
 * @letters: the number of letters it should read and print
 * Return: the number of letters it could read and write, 0 if the file
 * can not be opened  or read, if the file is Null or if write fails
 * or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fname;
	char *buffer;
	ssize_t numr, numw, totalr = 0;

	fname = fopen(filename, "r");
	if (filename == NULL)
	{
	return (0);
	}
	if (fname == NULL)
	{
	return (0);
	}
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
	fclose(fname);
	return (0);
	}
	numr = fread(buffer, sizeof(char), letters, fname);
	numw = write(STDOUT_FILENO, buffer, numr);
	if (numw != numr)
	{
	free(buffer);
	fclose(fname);
	return (0);
	}
	totalr += numr;
	free(buffer);
	fclose(fname);

	if (numr == -1)
	return (0);
	return (totalr);
}
