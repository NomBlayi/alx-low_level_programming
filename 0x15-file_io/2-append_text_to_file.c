#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add
 * at the end of the file
 * Description: If text_content is NULL, nothing must be added to the file
 * Return: 1 (Success) and if file exist,
 * -1 on failure,if filename is NUll and if file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fname;

	if (filename == NULL || text_content == NULL)
	{
	return (-1);
	}
	fname = fopen(filename, "r");
	if (fname == NULL)
	{
	return (-1);
	}
	fname = fopen(filename, "a");
	if (fname == NULL)
	{
	return (-1);
	}
	else
	{
	fprintf(fname, "%s", text_content);
	fclose(fname);
	return (1);
	}
}
