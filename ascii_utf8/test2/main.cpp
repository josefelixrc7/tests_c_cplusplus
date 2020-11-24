#include <iostream>
#include <cstdlib>
#include <cstdio>

int main()
{
	char16_t letra; 
	std::cout << "\nLetra: ";
	std::scanf("%c", &letra);
	std::printf("%i, %i", letra,'á');
	
	return 0;
}
