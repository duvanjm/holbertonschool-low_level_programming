#include <stdio.h>
#include <stdlib.h>
/**
 *main - main
 *Return: zero
 *@argc: variable
 *@argv: variable
 */
int main(int argc, char *argv[])
{
	int add;

	if (argc == 0)
	{
		printf("Error \n");
		return (1);
	}
	else
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		add = x + y;
		printf("%d\n", add);
	}
	return (0);
}
