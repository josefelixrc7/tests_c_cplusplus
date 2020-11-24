#include <iostream>

int main()
{
	printf("%c\n", 160);
	printf("%i\n", 'á');
	printf("%x\n", 'á');
	printf("%d\n", 'á');
	
	std::cout << "\n" << sizeof(short int);
	std::cout << "\n" << sizeof(int);
	std::cout << "\n" << sizeof(long int);
	std::cout << "\n" << sizeof(long long int);
	std::cout << "\n" << sizeof(float);
	std::cout << "\n" << sizeof(double);
	std::cout << "\n" << sizeof(char);
	std::cout << "\n" << sizeof(bool);
	return 0;
}
