#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	unsigned long i, num;
	if (argc < 2) {
		printf("Enter one number\n");
	}
	num = strtol(argv[1], NULL, 10);

//	int v = 4;
	
	for (i = num / 2; i > 0; i--) {
		
		
		
		if (num % i == 0)
			printf("%lu\n", i);
				
	}
//	void assert(v % 2 == 0);
}
