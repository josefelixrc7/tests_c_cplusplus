#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Creamos

		int* ptr;
		ptr = malloc(5 * sizeof(*ptr));

	// Almacenamos
		if(ptr != NULL)
		{
			for(int a = 0; a < 5; a++)
			{
				*(ptr + a) = a * 2;
			}
		}
	
	// Mostramos
		for(int a = 0; a < 5; a++)
		{
			printf("%d\n", *(ptr + a));
		}

	// Anyadimos memoria
		ptr = realloc(ptr, 10 * sizeof(*ptr));
	
	// Almacenamos
		if(ptr != NULL)
		{
			for(int a = 5; a < 10; a++)
			{
				*(ptr + a) = a * 2;
			}
		}	
	
	// Mostramos
		printf("\nNuevo: \n");
		for(int a = 0; a < 10; a++)
		{
			printf("%d\n", *(ptr + a));
		}

	free(ptr);

	return 0;
}
