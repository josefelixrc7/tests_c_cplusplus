#include <iostream>
#include <vector>
#include <memory>

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
    std::vector<std::unique_ptr<Hamburguesa>> pedido;
    for(int a = 0; a < 10; a++)
    {
        std::string nombre;
        std::cin >> nombre;
        pedido.push_back(std::make_unique<Hamburguesa>(nombre));
    }

    return 0;
}
