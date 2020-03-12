#include <stdlib.h>
#include "3-calc.h"
/**
 *array_iterator - function
 *Return: void
 *@array: pointer
 *@size: size of array
 *@action: pointer
 */
int main(int argc, char *argv)
{
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '/' &&
	    *argv[2] != '*' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (*argv[2] == '/' || *argv[2] == '%' && *argv[3] == 0)
	{
		printf ("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", get_op_function(argv[2])(num1, num2));
	return(0);
}
