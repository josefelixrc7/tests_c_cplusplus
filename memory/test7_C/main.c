#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str20[20]; 
	char *str = NULL;
	
	strcpy(str20, "123456");
	str = malloc(strlen(str20) + 1);
	strcpy(str, str20);

	printf("La palabra es: '%s' y el tamanyo es: %i\n", str, strlen(str));
		
	free(str);

	return 0;
}
