#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - function
 *Return: valve 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char d = 'a';
while (d <= 'z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
