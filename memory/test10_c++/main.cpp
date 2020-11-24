#include <iostream>
#include <cstdlib>
#include <cstring>

int main()
{
	char cadena[50] = "Grr Ssss Chirp";
	char* buffer;
	char* resultado;

	for(int a = 0, b = 0; a < (int)std::strlen(cadena); a++)
	{
		buffer[]
	}
	
	sqlGen = (char*)std::malloc(std::strlen(sql) + 1);
	std::strcpy(sqlGen, sql);

	std::cout << "\nsqlGen: " << sqlGen << "\n";

	std::cout << "\nIngrese: ";
	std::cin >> sql2;

	int tamanyo = std::strlen(sql) + std::strlen(sql2) + 1;
	sqlGen = (char*)std::realloc(sqlGen, tamanyo);
	std::strcat(sqlGen, sql2);
	std::cout << "\nsqlGen: " << sqlGen << "\n";

	tamanyo += std::strlen(sql3);
	sqlGen = (char*)std::realloc(sqlGen, tamanyo);
	std::strcat(sqlGen, sql3);
	std::cout << "\nsqlGen: " << sqlGen << "\n";

	std::free(sqlGen);
	return 0;
}
