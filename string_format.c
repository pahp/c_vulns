#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>

int main(int argc, char *argv[])
{

	int matter = 0;
	int mattercount = 0;
	char *input;
	char *secret = "SUPER SECRET";
	char name[100];

	input = readline("What is your name?\n");
	strncpy(name, input, 99);

	printf("Your name is:\n");
	printf(name);
	printf("\n");

	free(input);
	return 0;

}
