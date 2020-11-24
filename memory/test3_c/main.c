#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	typedef struct
	{
		int num;
		char* info;
	}record;
	
	record *recs;
	int num_recs = 2;
	char str[] = "Information here";
	
	recs = calloc(num_recs, sizeof(record));
	if(recs != NULL)
	{
		for(int a = 0; a < num_recs; a++)
		{
			(recs + a)->num = a;
			(recs + a)->info = malloc(sizeof(str));
			strcpy((recs + a)->info, str);
		}
	}

	printf("\nRecords: \n");
	for(int a = 0; a < num_recs; a++)
	{
		printf("\nnum: %d, info: %s", (recs + a)->num, (recs + a)->info);
	}

	free(recs);
	
	return 0;
}
