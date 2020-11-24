#include <iostream>
#include <thread>

class menu
{
    public:
        void listMenus()
        {
            do
            {
                std::cout << "\n1) Saludar\n";
                std::cout << "2) Despedir\n";
                std::cout << "3) Ver progreso\n";
                std::cout << "Su opción: ";
                std::cin >> v;
                if(v > 3 || v < 1)
                    std::cout << "Numero incorrecto";
            }while(v > 3 || v < 1);
        }
        void handleMenus()
        {
            switch(v)
            {
                case 1:
                    saludar();
                    break;
                case 2:
                    //despedir();
                    break;
                case 3:
                    verProgresos();
                    break;
            }
        }
    private:
        short v;
};

int main()
{
    menu obj;
    char op;
    do
    {
        obj.listMenus();
        obj.handleMenus();
        std::cout << "\¿Desea salir? (y/n): ";
        std::cin >> op;
    }while(op != "n");

    return 0;
}
