#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_file - A function that creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Description:The created file must have those permissions:
 * rw-------. If the file already exists, do not change the permissions.
 * if the file already exists it must be truncated
 * if text_content is NULL an emptyy file must bbe created
 * Return: 1 (Success), -1 on failure, if the file is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fname, count = 0;
	mode_t mode = S_IRUSR | S_IWUSR;/*rw-------*/

	fname = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (filename == NULL)
	{
	return (-1);
	}
	if (fname == -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
	count = write(fname, text_content, strlen(text_content));
	if (count == -1)
	{
	close(fname);
	return (-1);
	}
	}
	close(fname);
	return (1);
}
