#include <stdio.h>

int main(int argc, char **argv)
{
	int total_numbers_squared = 0;
	int number;

	printf("Give me a positive number and I will square it; if the number is negative I will exit.\n");

	while( 1 ) {
		printf("enter number: ");
		scanf("%d", &number);

		if( number <= 0 ) {
			if( number == 0 ) {
				printf("surprise! i'm going to exit even though 0 isn't really negative\n");
			}
			break;
		}

		if( number == 99 ) {
			printf("I really like this number.\n");
		}

		printf("the squared value of %d is %d\n", number, number*number);
		total_numbers_squared = total_numbers_squared + 1;
	}

	if( total_numbers_squared > 0 ) {
		printf("together we squared %d values\n", total_numbers_squared);
	} else if( total_numbers_squared == 1 ) {
		printf("together we squared a single value\n");
	} else {
		printf("we didn't square anything\n");
	}
	return 0;
}
