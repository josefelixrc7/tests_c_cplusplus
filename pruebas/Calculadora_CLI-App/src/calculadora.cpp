#include <iostream>
#include "calculadora.h"
using namespace std;

calculadora::calculadora()
{
	do
	{
		cout << "Hola, bienvenido a la calculadora. Ingresa una opción" << endl;
		cout << "1) Sumar \n 2) Restar \n 3) Multiplicar \n 4) Dividir" << endl;
		cout << "Tu opción es: ";
		cin >> opcion;
		if(opcion < 1 || opcion > 4)
		{
			cout << "La opción ingresada es errónea, intente de nuevo. \n\n";
		}
	}while(opcion < 1 || opcion > 4);
	
	cout << "Primer número: ";
	cin >> n1;
	cout << "\n Segundo número: ";
	cin >> n2;
}

void calculadora::suma()
{
	resultado = n1 + n2;
}

void calculadora::resta()
{
	resultado = n1 - n2;
}

void calculadora::multiplicacion()
{
		resultado = n1 * n2;
}

void calculadora::division()
{
	resultado = n1 / n2;
}

float calculadora::getResultado()
{
	switch(opcion)
	{
		case 1:
			suma();
			break;
		case 2:
			resta();
			break;
		case 3:
			multiplicacion();
			break;
		case 4:
			division();
			break;				
	}
	return resultado;
}
