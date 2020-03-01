#include <stdio.h>
/**
 *main - main
 *Return: zero
 *@argc: variable
 *@argv: variable
 */
int main(int argc, char *argv[])
{
int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
