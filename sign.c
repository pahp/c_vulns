#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>

int main(int argc, char *argv[])
{

	int matter = 0;
	char *input;

	input = readline("How many atoms of matter would you like? (Be careful of antimatter!)\n");
	matter = atoi(input);
	free(input);

	printf("You asked for %d atoms of matter.\n", matter);

	printf("Here you go:\n");
	for (matter; matter > 0; matter--)
	{
		printf(".");
	}
	printf("\n");
	
	if (matter < 0) 
	{
		printf("Oh no, that wasn't matter, it's antimatter!!!! ***KABOOM***\n");
		return 1;
	}

	return 0;

}
