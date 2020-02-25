#include "holberton.h"
/**
 *print_chessboard - function
 *@a: variable
 *Return: dest
 */
void print_chessboard(char (*a)[8])
{
int colums;
int rows;

	for (rows = 0; rows < 8; rows++)
	{
		for (colums = 0; colums < 8; colums++)
		{
			_putchar(a[rows][colums]);
		}
		_putchar('\n');
	}
}
