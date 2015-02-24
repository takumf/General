#include <stdio.h>

int main (argc, argv)
	int argc;
	const char* argv[];
{
	int i = 0;

	if ( argc != 1)
		for (i = 0; i < argc; ++i)
			printf ("%s\n", argv [i]);
	else
		printf ("This is a weird-ass convention.\n");

	return (0);
}
