#include <iostream>

struct database
{
	struct connection
	{
		char *querySQL;
	}conGen;
}objGen;

int main()
{
	std::cout << "\nHola, prueba: \n";

	objGen.conGen.querySQL = new char[5];

	for(int a = 0; a < 5; a++)
	{
		objGen.conGen.querySQL[a] = 'a';
	}

	std::cout << "querySQL: " << objGen.conGen.querySQL << "\n";

	delete[] objGen.conGen.querySQL;

	return 0;
}