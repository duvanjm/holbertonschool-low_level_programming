#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - function
 * @filename: name of file
 * @text_content: content of text
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, i, w;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	if (0 == -1)
		return (0);
	if (text_content)
	{
		w = write(o, text_content, i);
		if (w < 0)
			return (-1);
	}
	close(o);
	return (1);
}
