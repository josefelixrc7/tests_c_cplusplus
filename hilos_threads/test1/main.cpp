
#include <iostream>
#include <thread>

void saludar(short valor)
{
	for(short a = 0; a < valor; a++)
	{
		std::cout << "¡Hola! " << a << "\n";
	}
}
void despedir(short valor)
{
	for(short a = 0; a < valor; a++)
	{
		std::cout << "¡Adiós! " << a << "\n";
	}
}
int main(int argc, char argv[])
{
	// Creamos los hilos
		std::thread hilo1(saludar, 100);
		std::thread hilo2(despedir, 20);
	// Esperamos a que terminen
		hilo1.join();
		hilo2.join();

	return 0;
}
