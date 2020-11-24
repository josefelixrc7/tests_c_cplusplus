#include <iostream>
#include <cstdlib>

const int dimension = 10;

main()
{
	int valor, indice, j, pos_menor, alto, central, bajo;
	float menor, AUX, arreglo[dimension] = {54, 20, 80, 65, 136, 213, 14, 36, 73, 194};

	//:clrscr();
	
	// Ordenar
		for(indice = 0; indice < dimension; indice++)
		{
			menor = arreglo[indice];
			pos_menor = indice;
			for(j = indice + 1; j < dimension; j++)
			{
				if(menor > arreglo[j])
				{
					menor = arreglo[j];
					pos_menor = j;
					AUX = arreglo[indice];
					arreglo[indice] = arreglo[pos_menor];
					arreglo[pos_menor] = AUX;
				}
			}
		}
	// Mostrar valores
		std::cout << "|--Valores ordenados: \n";
		for(indice = 0; indice < dimension; indice++)
		{
			std::cout << "   |--arreglo[" << indice << "] = " << arreglo[indice] << "\n";		
		}
	// Valor a buscar
		std::cout << "\n|--Búsqueda: \n";
		std::cout << "   |--Valor: ";
		std::cin >> valor;

		bajo = 0;
		alto = dimension - 1;
		central = (bajo + alto) / 2;

		
		std::cout << "   |--Binaria: ";
		while(bajo < alto && arreglo[central] != valor)
		{
			std::cout << "\n      |--Data: ";
			std::cout << "\n         |--bajo: " << bajo;
			std::cout << "\n         |--central: " << central;
			std::cout << "\n         |--alto: " << alto;
			if(valor < arreglo[central])
			{
				alto = central;
				central = (bajo + alto) / 2;
			}
			else
			{
				bajo = central + 1;
				central = (bajo + alto) / 2;
			}
		}
		
		if(valor == arreglo[central])
			std::cout << "\nEl valor se encuentra en la posición " << central << "\n";
		else
			std::cout << "\nNo se encontró el valor\n";

		//std::getch();
}
