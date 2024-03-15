#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char x = 0;
	unsigned char y = 0;
	int delay = 3;

	printf("This program will run forever. Press Ctrl-C to stop.\n");
	printf("Starting in:\n");
	for (delay; delay > 0; delay--)
	{
		printf("%d...\n", delay);
		sleep(1);
	}

	while (1)
	{
		printf("char: %d unsigned char: %d\n", x, y);
		x = x + 1;
		y = y + 1;
		usleep(300000);
	}

	return 0;

}
