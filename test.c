#include <stdio.h>

int main (int argc, const char * argv [])
{
	int i = 0;
	if (argc > 1)
		for (i = 0; i < argc; ++i)
			printf ("%d\t%s\n", i, argv [i]);
	else
		printf ("Sad.\n");

	return (0);
}
