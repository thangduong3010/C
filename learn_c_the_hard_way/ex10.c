#include <stdio.h>

int main (int argc, char *argv[])
{
	int i = 0;

	// go through each string in argv
	// skipping argv[0]?
	for (i = 0; i < argc; ++i)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}

	// make array of strings
	char *state[] = {
		"California", "Oregon",
		"Washington", "Texas", '\0'
	};
	int num_states = 5;

	/* for loop format
	for(INIT; TEST; INCREMENTER){
		CODE;
	}*/
	for (i = 0; i < num_states; ++i)
		printf("State %d: %s\n", i , state[i]);

	return 0;
}