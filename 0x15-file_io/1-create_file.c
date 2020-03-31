#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - function that print a binary
 * @filename: name of file
 * @letters: letters
 * Return: void
 */
int create_file(const char *filename, char *text_content)
{
	int o, i, w;

	if (filename == NULL)
		return (-1);
	if (text_content)
		for (i = 0; text_content[i] != '\0'; i++);
	o = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 600);
	if (0 == -1)
		return (0);
	if (text_content)
		w = write(o, text_content, i);
	if (w == -1)
		return (0);
	close(o);
	return (1);
}
