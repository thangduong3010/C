#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;

	/* while loop format
		while(TEST)
		{
			CODE;
		}
	the loop runs as long as TEST is true(1)*/

	while(i < argc)
	{
		printf("arg %d: %s\n", i, argv[i]);
		++i;
	}

	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	int num_states = 4;
	i = 0;
	while(i < num_states)
	{
		printf("state %d: %s\n", i, states[i]);
		++i;
	}
	printf("%d\n", i);
	--i;
	// reverse print
	while(i >= 0)
	{
		printf("state %d: %s\n", i, states[i]);
		--i;
	}

	return 0;
}