#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - function
 * @filename: name of file
 * @text_content: letters
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int o, i, w;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
	}
	o = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (o == -1)
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
