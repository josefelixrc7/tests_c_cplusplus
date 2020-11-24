#include <iostream>
#include <cstdlib>

int main()
{
	auto ptr = (int*)std::malloc(10 * sizeof(int));
	
	if(ptr != NULL)
	{
		for(int a = 0; a < 10; a++)
		{
			*(ptr + a) = a * 2;
		}
	}
		
	for(int a = 0; a < 10; a++)
	{
		std::cout << "-" << *(ptr + a) << "\n";
	}

	std::cout << "\nNuevo: \n";
	
	ptr = (int*)std::realloc(ptr, 20 * sizeof(*ptr));	
	if(ptr != NULL)
	{
		for(int a = 10; a < 20; a++)
		{
			*(ptr + a) = a * 2;
		}
	}
		
	for(int a = 0; a < 20; a++)
	{
		std::cout << "-" << *(ptr + a) << "\n";
	}

	std::free(ptr);

	return 0;
}
