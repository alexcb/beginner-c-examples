#include <stdio.h>

int main(int argc, char **argv)
{
	int starting_number;
	int ending_number;

	printf("Hello, please enter a starting number: ");
	scanf("%d", &starting_number);

	printf("Hello, please enter a ending number (must be greater than %d): ", starting_number);
	scanf("%d", &ending_number);

	if( ending_number <= starting_number ) {
		printf("error: the supplied ending number %d was not greater than %d\n", ending_number, starting_number);
		return 1;
	}

	for( int i = starting_number; i <= ending_number; i++ ) {
		printf("%d ", i);
	}

	// print a newline character so the next statement
	// appears on a separate line from the numbers.
	printf("\n");

	printf("goodbye\n");

	return 0;
}
