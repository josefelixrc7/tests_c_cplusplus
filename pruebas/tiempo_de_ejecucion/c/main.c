#include <stdio.h>
#include <time.h> 

int main()
{
	
	unsigned t0, t1;
	 
	t0 = clock();
	
		// Code to execute
			int b = 0;
			for(int a = 0; a < 100000000; a++) b++;
		// End
		
	t1 = clock();
	 
	double time = (double) (t1 - t0) / CLOCKS_PER_SEC;
	printf("\nExecution Time: %f\n", time);

	return 0;
} 
