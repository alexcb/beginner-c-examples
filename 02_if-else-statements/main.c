#include <stdio.h>

int main(int argc, char **argv)
{
	int num;

	printf("Hello, please enter a number: ");

	scanf("%d", &num);

	if( num == 99 ) {
		printf("I really like this number\n");
	} else {
		printf("I don't care for this number\n");
	}

	return 0;
}
