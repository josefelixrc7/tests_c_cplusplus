#include <iostream>
#include <thread>

int contador = 0;

void dormir()
{
	int a = 0;
	while(a < 10)
	{
		system("sleep 5");
		contador++;
		a++;
	}
}
void lista()
{
	int op, op2;
	do
	{
		do
		{
			std::cout << "1) Ver contador\n";
			std::cout << "2) Dormir\n";
			std::cout << "op: ";
			std::cin >> op;
		}while(op < 1 || op > 2);
		
		switch(op)
		{
			case 1:
				std::cout << "\n Contador: " << contador << "\n";
				break;
			case 2:
				break;
		}
		std::cout << "op2 (1): ";
		std::cin >> op2;
	}while(op2 == 1);
}

int main()
{	
	std::thread t1(dormir);

	std::cout << "\nID: " << t1.get_id() << "\n\n";

	lista();
	
	t1.join();
	
    return 0;
}
