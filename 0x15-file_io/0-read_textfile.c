#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - function that print a binary
 * @filename: name of file
 * @letters: letters
 * Return: void
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w, c;
	char *d;

	d = malloc(sizeof(char) * letters);
	if (d == NULL)
		return (0);
	o = open(filename, O_RDWR);
	if (o == -1)
	{
		free(d);
		return (0);
	}
	r = read(o, d, letters);
	w = write(STDOUT_FILENO, d, (ssize_t)r);
	if (w == -1)
	{
		free(d);
		return (0);
	}
	if (r != w)
		return (0);
	free(d);
	c = close(o);
	if (c == -1)
		return (0);
	return (w);
}
