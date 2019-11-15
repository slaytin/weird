#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	unsigned long i, num, total;
	if (argc < 2) {
		printf("Enter one number\n");
	}
	num = strtol(argv[1], NULL, 10);
	total = 0;
//	int v = 4;
	
	for (i = num / 2; i > 0; --i) {
		
		
		
		if (num % i == 0){
			printf("%lu\n", i);
			total += i;	
		}	
	}
	printf("Sum of divisors = %lu\n", total);
//	void assert(v % 2 == 0);
}
