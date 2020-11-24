#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char sql[50] = "INSERT INTO ("; 
	char sql2[50]; 
	char *sqlGen = NULL;
	
	printf("\nIngrese contenido: ");
	scanf("%s", sql2);
	
	sqlGen = malloc(strlen(sql) + 1);
	strcpy(sqlGen, sql);
	printf("\nsqlGen: %s\n", sqlGen);

	int tamanyo = strlen(sql) + strlen(sql2) + 1;
	sqlGen = realloc(sqlGen, tamanyo);
	
	strcat(sqlGen, sql2);
	printf("\nsqlGen: %s\n", sqlGen);
	
	free(sqlGen);
	
	return 0;
}
