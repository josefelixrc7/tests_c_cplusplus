#include <iostream>
#include <vector>

class Hamburguesa
{
    public:
        Hamburguesa(std::string tipo){std::cout << "\nSe creo una hamburguesa";tipo_ = tipo;}
        ~Hamburguesa(){std::cout << "\nSe destruyo una hamburguesa";}

        std::string get_nombre() const
        {
            return tipo_;
        }

    private:
        std::string tipo_;
};

int main()
{
    std::vector<Hamburguesa*> pedido;
    for(int a = 0; a < 10; a++)
    {
        std::string nombre;
        std::cin >> nombre;
        pedido.push_back(new Hamburguesa(nombre));
        Hamburguesa* h_actual = pedido.back();
        std::cout << "\nHamb. actual: " << h_actual->get_nombre() << "\n";
    }

    for(int a = 0; a < (int)pedido.size(); a++) delete pedido[a];
    return 0;
}
