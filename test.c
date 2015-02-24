#include <stdio.h>

<<<<<<< HEAD
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
=======
/*int main (int argc, const char * argv [])
{
	int i = 0;
	if (argc > 1)
		for (i = 0; i < argc; ++i)
			printf ("%d\t%s\n", i, argv [i]);
	else
		printf ("Sad.\n");*/
>>>>>>> aux

	return (0);
}
