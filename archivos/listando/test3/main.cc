#include <iostream>
#include <filesystem>

void muestra_contenido_de(const std::string &a_carpeta)
{
    for (auto &p : std::filesystem::directory_iterator(a_carpeta))
        std::cout << p << '\n';
}

int main()
{
	std::string carpeta = "/";
	muestra_contenido_de(carpeta);
	
	return 0;
}

// Compilar con --std=c++17
