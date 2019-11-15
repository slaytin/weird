#include <stdio.h>
#include <stdlib.h>

// early vers of program to search for weird numbers - 
// 						https://en.wikipedia.org/wiki/Weird_number

// so far:  takes 1 argument, returns its divisors excluding itself

int main(int argc, char *argv[]) 
{
	unsigned long i, num, total;
	if (argc < 2) {
		printf("Enter one number\n");
	}
	num = strtol(argv[1], NULL, 10);
	total = 0;
	
	for (i = num / 2; i > 0; --i) {		// starts at half, less nos to check
		if (num % i == 0){             // checks if divisor
			printf("%lu\n", i);
			total += i;	
		}	// Sums the divisors
	}
	printf("Sum of divisors = %lu\n", total);
}
