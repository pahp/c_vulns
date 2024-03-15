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

	printf("How many atoms of plutonium would you like?\n");
	input = readline("WARNING: IT IS UNSAFE TO ASK FOR MORE THAN 5 ATOMS!\n");
	matter = atoi(input);
	free(input);

	printf("You asked for %d atoms of matter.\n", matter);


	printf("Here you go:\n");
	for (mattercount = 0; mattercount <= matter; mattercount++)
	{
		printf(".");
	}
	printf("\n");
	
	if (mattercount > 5)
	{
		printf("Oh no, too much plutonium! I said not more than 5!!!\n");
	    printf("You were poisoned by radiation. Game over.\n");
		return 1;
	} else {
		printf("I hope you enjoy your plutonium safely.\n");
	}

	return 0;

}
