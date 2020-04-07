#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	size_t len = 0;
	int status, command = 0, i;
	pid_t pid;
	char *arv[1], *text, *buf;

	arv[1] = NULL;
	buf = malloc(sizeof(char));
	if (buf == NULL)
	{
		return (0);
		free(buf);
		free(arv);
		free(text);
	}
	printf("$ ");
	command = getline(&buf, &len, stdin);

	while (command > 1)
	{
		text = strtok(buf, "\n");
		arv[0] = text;

		pid = fork();
		if (pid == -1)
		{
			perror("Error");
			free(buf);
			return (1);
		}
		if (pid == 0)
		{
			if (execve(arv[0], arv, NULL) == -1)
			{
				perror("Error: \n");
				free(buf);
			}
		}
		else
		{
			wait(&status);
		}
		printf("$ ");
		getline(&buf, &len, stdin);
	}
	free(buf);
	free(text);
	for (i = 0; arv[i] != NULL; i++)
	{
		free(arv[i]);
	}
	return (0);
}
