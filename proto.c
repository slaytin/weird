#include <stdio.h>
#include <stdlib.h>

// early vers of program to search for weird numbers - 
//                       https://en.wikipedia.org/wiki/Weird_number
// takes one argument, returns all its divisors including 1 except itself
// l22 Prints sum of divisors

int main(int argc, char *argv[]) 
{
	unsigned long i, num, total;
	if (argc < 2) {
		printf("Enter one number\n");
	}
	num = strtol(argv[1], NULL, 10);
	total = 0;
	
	for (i = num / 2; i > 0; --i) {
		if (num % i == 0){
			printf("%lu\n", i);
			total += i;	
		}	
	}
	printf("Sum of divisors = %lu\n", total);
}
