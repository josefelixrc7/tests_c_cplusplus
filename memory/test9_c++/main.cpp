#include <iostream>
#include <cstdlib>
#include <cstring>

int main()
{
	char sql[50] = "INSERT INTO databases(";
	char sql2[50];
	char* sql3 = (char*)");";
	char* sqlGen;
	
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
