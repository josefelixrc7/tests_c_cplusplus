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

	std::free(ptr);

	return 0;
}
