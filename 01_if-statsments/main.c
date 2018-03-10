#include <stdio.h>

int main(int argc, char **argv)
{
	int num;

	printf("Hello, please enter a number: ");

	scanf("%d", &num);

	if( num < 0 ) {
		printf("You entered a negative number\n");
	}

	if( num == 0 ) {
		printf("You entered the value zero\n");
	}

	if( num > 0 ) {
		printf("You entered a positive number\n");
	}

	if( num == 99 ) {
		printf("I really like this number\n");
	}

	return 0;
}
