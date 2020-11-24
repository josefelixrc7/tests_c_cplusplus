#include <iostream>

int main()
{
	std::string var;
	var = "valor1";
	
	switch(var)
	{
		case "valor1":
			std::cout << "\nEs valor1\n";
			break;
		case "valor2":
			std::cout << "\nEs valor2\n";
			break;
		default:
			std::cout << "\nDesconocido\n";
			break;
	}
	
	return 0;
}
