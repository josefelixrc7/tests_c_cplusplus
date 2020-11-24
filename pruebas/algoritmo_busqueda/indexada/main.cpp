#include <iostream>

int colocar(int *v, int b, int t)
{
	int i, pivote, valor_pivote, temp;
	pivote = b;
	valor_pivote = v[pivote];
	
	for (i = b + 1; i <= t; i++)
	{
		if (v[i] < valor_pivote)
		{
			pivote++; 
			temp = v[i];
			v[i] = v[pivote];
			v[pivote] = temp;
		}
	}
	temp = v[b];
	v[b] = v[pivote];
	v[pivote] = temp;

	return pivote;
} 
void Quicksort(int* v, int b, int t)
{
	std::cout << "\nInicio QuickSort\n";
	std::cout << "\n- b: " << b << ", t: " << t << ", lista: ";
	for(int a = 0; a < t; a++) std::cout << v[a] << ",";
	std::cout << "\n";
	
	int pivote;
	if(b < t)
	{
		pivote = colocar(v, b, t);
		Quicksort(v, b, pivote - 1);
		Quicksort(v, pivote + 1, t);
	} 
	std::cout << "\nFin QuickSort\n";
} 

int main()
{
	int lista[] = {9, 10, 22, 30, 5, 2, 12, 33, 8, 14};
	
	std::cout << "\nLista no ordenada\n";
	for(int a = 0; a < 10; a++) std::cout << "\n-" << a << ": " << lista[a];

	Quicksort(lista, 0, 9);
	
	std::cout << "\n\nLista  ordenada\n";
	for(int a = 0; a < 10; a++) std::cout << "\n-" << a << ": " << lista[a];
	std::cout << "\n";

	return 0;
}
