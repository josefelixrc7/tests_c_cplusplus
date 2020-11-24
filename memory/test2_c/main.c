#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr = malloc(10 * sizeof(*ptr));

	if(ptr != NULL)
	{
		for(int a = 0; a < 10; a++)
		{
			*(ptr + a) = a;
		}
	}
	
	for(int a = 0; a < 10; a++)
	{
		printf("%d\n", *(ptr + a));
	}

	free(ptr);

	return 0;
}
